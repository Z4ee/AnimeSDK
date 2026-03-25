#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTargetLockStatus_TypeDefinitionIndex = 16903;

	enum class CakeRaceTargetLockStatus : ::System::Int32
	{
		None = 0,
		Locked = 1,
		Unlocked = 2,
		AbnormalLost = 3,
	};
}
