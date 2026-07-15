#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBuffName_TypeDefinitionIndex = 17634;

	enum class CakeRaceBuffName : ::System::Int32
	{
		None = 0,
		JumpHeightAdd = 1,
		Frozen = 2,
		KlaraPassive = 3,
		KlaraDecWait = 4,
		TrashPassive = 5,
		TrashDecWait = 6,
		Stun = 7,
		RobinPassive = 8,
		RobinDrinkin = 9,
		TrapParalyzed = 10,
		RocketSpeedup = 11,
		SpiledFood = 12,
		RobinSlience = 13,
	};
}
