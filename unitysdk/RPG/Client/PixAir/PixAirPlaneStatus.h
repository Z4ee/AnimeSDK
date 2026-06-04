#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatus_TypeDefinitionIndex = 73691;

	enum class PixAirPlaneStatus : ::System::Int32
	{
		Invalid = 0,
		NotObtained = 1,
		NotUnlocked = 2,
		Obtained = 3,
		NeedMissionToObtain = 4,
	};
}
