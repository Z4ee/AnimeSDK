#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipCameraMode_TypeDefinitionIndex = 65717;

	enum class TravelShipCameraMode : ::System::Int32
	{
		Normal = 0,
		Auto = 1,
	};
}
