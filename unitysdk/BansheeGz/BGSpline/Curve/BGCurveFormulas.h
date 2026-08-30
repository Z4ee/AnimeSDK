#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBICDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1C006510)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBIC_OFFSET UNITYSDK_OFFSET(0x1C005CA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATICDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1C006460)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATIC_OFFSET UNITYSDK_OFFSET(0x1C005C20)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveFormulas_TypeDefinitionIndex = 35323;

	class BGCurveFormulas : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 BezierCubic(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBIC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 BezierQuadratic(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATIC_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 BezierCubicDerivative(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBICDERIVATIVE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 BezierQuadraticDerivative(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATICDERIVATIVE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
