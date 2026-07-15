#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatV2TitleType_TypeDefinitionIndex = 10906;

	enum class ActivityDiceCombatV2TitleType : ::System::Int32
	{
		None = 0,
		SingleDamageGreaterEqual = 1,
		TasticsCardUseGreaterEqual = 2,
		DefendSuccCountGreaterEqual = 3,
		DirectDamageGreaterEqual = 4,
		StrikeBackCountGreaterEqual = 5,
		ApplyModifierLayerGreaterEqual = 6,
		HealGreaterEqual = 7,
		IceEffectCountGreaterEqual = 8,
		UpgradeDiceCountGreaterEqual = 9,
		ReRollCountGreaterEqual = 10,
		SelectTeammateDiceCountGreaterEqual = 11,
		SelectDiceRareGreaterEqualCountGreaterEqual = 12,
		RollPointGreaterEqualThanXCountGreaterEqual = 13,
		RemainHPGreaterEqual = 14,
		RarityLessEqual = 15,
		AttackPointGreaterEqual = 16,
		DefendkPointGreaterEqual = 17,
	};
}
