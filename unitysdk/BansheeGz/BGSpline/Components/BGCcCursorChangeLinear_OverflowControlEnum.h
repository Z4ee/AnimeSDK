#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorChangeLinear_OverflowControlEnum_TypeDefinitionIndex = 34115;

	enum class BGCcCursorChangeLinear_OverflowControlEnum : ::System::Int32
	{
		Cycle = 0,
		PingPong = 1,
		Stop = 2,
	};
}
