#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackEntrySubSystemMode_TypeDefinitionIndex = 71363;

	enum class HackEntrySubSystem_HackEntrySubSystemMode : ::System::Int32
	{
		LittleRobot = 3,
		Camera = 1,
		Drone = 2,
		Normal = 0,
	};
}
