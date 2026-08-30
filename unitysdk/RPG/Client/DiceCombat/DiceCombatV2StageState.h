#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2StageState_TypeDefinitionIndex = 75697;

	enum class DiceCombatV2StageState : ::System::Int32
	{
		Error = 0,
		Locked = 1,
		UnlockNotCompleted = 2,
		Completed = 3,
	};
}
