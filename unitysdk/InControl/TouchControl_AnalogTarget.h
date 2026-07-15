#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int TouchControl_AnalogTarget_TypeDefinitionIndex = 38728;

	enum class TouchControl_AnalogTarget : ::System::Int32
	{
		None = 0,
		LeftStick = 1,
		RightStick = 2,
		Both = 3,
	};
}
