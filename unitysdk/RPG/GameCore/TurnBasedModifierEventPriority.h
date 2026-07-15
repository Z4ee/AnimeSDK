#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierEventPriority_TypeDefinitionIndex = 17506;

	enum class TurnBasedModifierEventPriority : ::System::Int32
	{
		None = 0,
		EnterBattlePriority = 1,
		LimboWaitHealPriority = 2,
		Phase1Priority = 3,
		Phase2Priority = 4,
		AfterAttackPriority = 5,
		BeforeBeingHealPriority = 6,
		ListenCharacterCreatePriority = 7,
		ListenCharacterDiePriority = 8,
		ListenCharmMakeDamagePriority = 9,
		ListenElationTimeStartPriority = 10,
		ListenElationTimeEndPriority = 11,
		Count = 12,
	};
}
