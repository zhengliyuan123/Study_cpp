#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y, n, p;
    cin >> x >> y >> n >> p;
    double plan1 = (p >= x) ? p - y : p;
    double plan2 = p * n / 10.0;
    double result = min(plan1, plan2);
    cout << fixed << setprecision(2) << result;
    return 0;
}