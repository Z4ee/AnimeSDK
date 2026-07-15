#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierBehaviorFlag_TypeDefinitionIndex = 16803;

	enum class AdventureModifierBehaviorFlag : ::System::Int32
	{
		EnterBattleAdvantage = 0,
		Stealth = 1,
		Stun = 2,
		Blind = 3,
		Sneak = 4,
		SneakExposed = 5,
		HolyShield = 6,
		Taunt = 7,
		Tempter = 8,
		Fear = 9,
		Freeze = 10,
		TimeLock = 11,
		NoAlert = 12,
		Enchanted = 13,
		BeHitWithoutBattle = 14,
		Debuff = 15,
		EnterBattleBlockPosture = 16,
		Confine = 17,
		LoopHit = 18,
		NpcChase = 19,
		NoMove = 20,
		NonAggressive = 21,
	};
}
