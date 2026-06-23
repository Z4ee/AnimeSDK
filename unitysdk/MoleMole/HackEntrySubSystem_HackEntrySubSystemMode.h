#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackEntrySubSystemMode_TypeDefinitionIndex = 83318;

	enum class HackEntrySubSystem_HackEntrySubSystemMode : ::System::Int32
	{
		Camera = 1,
		Normal = 0,
		UAV = 3,
		Drone = 2,
	};
}
