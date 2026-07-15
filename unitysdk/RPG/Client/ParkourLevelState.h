#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevelState_TypeDefinitionIndex = 59107;

	enum class ParkourLevelState : ::System::Int32
	{
		None = 0,
		Locked = 1,
		Unlocked = 2,
		Finished = 3,
	};
}
