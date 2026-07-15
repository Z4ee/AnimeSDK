#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WaterWheelRotateStauts_TypeDefinitionIndex = 65737;

	enum class WaterWheelRotateStauts : ::System::Int32
	{
		Stop = 0,
		Rotate = 1,
		StartAcc = 2,
		StopAcc = 3,
		ForceStopAcc = 4,
	};
}
