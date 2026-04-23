#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/System/Object.h"

#define BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_IN_OFFSET UNITYSDK_OFFSET(0x17BC3B30)
#define BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_VAL_OFFSET UNITYSDK_OFFSET(0x17BC3B40)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int FieldExtensions_TypeDefinitionIndex = 33803;

	class FieldExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean In(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Int32 mask)
		{
			return ((::System::Boolean(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_IN_OFFSET))(field, mask);
		}

		static ::System::Int32 Val(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field)
		{
			return ((::System::Int32(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_FIELDEXTENSIONS_VAL_OFFSET))(field);
		}
	};
}
