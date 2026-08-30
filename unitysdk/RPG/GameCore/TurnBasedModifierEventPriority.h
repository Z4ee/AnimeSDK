#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierEventPriority_TypeDefinitionIndex = 18023;

	enum class TurnBasedModifierEventPriority : ::System::Int32
	{
		None = 0,
		EnterBattlePriority = 1,
		LimboWaitHealPriority = 2,
		Phase1Priority = 3,
		Phase2Priority = 4,
		AfterAttackPriority = 5,
		BeforeBeingHealPriority = 6,
		BeforeElationEchoPointBuffAdd = 7,
		ListenCharacterCreatePriority = 8,
		ListenCharacterDiePriority = 9,
		ListenCharmMakeDamagePriority = 10,
		ListenElationTimeStartPriority = 11,
		ListenElationTimeEndPriority = 12,
		ListenBeforeElationEchoPointBuffAdd = 13,
		Count = 14,
	};
}
