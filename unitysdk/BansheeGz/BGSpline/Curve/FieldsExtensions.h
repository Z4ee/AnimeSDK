#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Fields.h"
#include "unitysdk/System/Object.h"

#define BANSHEEGZ_BGSPLINE_CURVE_FIELDSEXTENSIONS_VAL_OFFSET UNITYSDK_OFFSET(0x16598E20)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int FieldsExtensions_TypeDefinitionIndex = 28180;

	class FieldsExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 Val(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields fields)
		{
			return ((::System::Int32(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_FIELDSEXTENSIONS_VAL_OFFSET))(fields);
		}
	};
}
