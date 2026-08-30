#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/System/Object.h"

#define BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_IN_OFFSET UNITYSDK_OFFSET(0x1F00D450)
#define BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_VAL_OFFSET UNITYSDK_OFFSET(0x1F00D460)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int FieldExtensions_TypeDefinitionIndex = 35316;

	class FieldExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean In(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_IN_OFFSET))(a1, a2);
		}

		static ::System::Int32 Val(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1)
		{
			return ((::System::Int32(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_VAL_OFFSET))(a1);
		}
	};
}
