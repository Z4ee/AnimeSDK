#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_ControlTypeEnum_TypeDefinitionIndex = 34466;

	enum class BGCurvePoint_ControlTypeEnum : ::System::Int32
	{
		Absent = 0,
		BezierSymmetrical = 1,
		BezierIndependant = 2,
	};
}
