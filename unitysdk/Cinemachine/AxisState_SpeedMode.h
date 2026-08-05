#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_SpeedMode_TypeDefinitionIndex = 34724;

	enum class AxisState_SpeedMode : ::System::Int32
	{
		MaxSpeed = 0,
		InputValueGain = 1,
	};
}
