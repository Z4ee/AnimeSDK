#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_FieldEnum_TypeDefinitionIndex = 34467;

	enum class BGCurvePoint_FieldEnum : ::System::Int32
	{
		PositionWorld = 0,
		PositionLocal = 1,
		ControlFirstWorld = 2,
		ControlFirstLocal = 3,
		ControlSecondWorld = 4,
		ControlSecondLocal = 5,
	};
}
