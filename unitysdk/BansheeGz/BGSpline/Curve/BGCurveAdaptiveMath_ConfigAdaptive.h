#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Config.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Fields.h"

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_CONFIGADAPTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x168E2220)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveAdaptiveMath_ConfigAdaptive_TypeDefinitionIndex = 34449;

	class BGCurveAdaptiveMath_ConfigAdaptive : public ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config
	{
	public:
		::System::Single Tolerance; // 0x30

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_CONFIGADAPTIVE__CTOR_OFFSET))(this, a1);
		}
	};
}
