#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonConfigListType_TypeDefinitionIndex = 53972;

	enum class JsonConfigListType : ::System::Int32
	{
		AdventureAbilityConfig = 0,
		TurnBasedAbilityConfig = 1,
		RtAbilityConfig = 2,
		BattleLineupConfig = 3,
		BattleLineupAvatarConfig = 4,
		BattleLineupMazeBuffConfig = 5,
		BattleLineupSkillTreePresetConfig = 6,
		BattleLineupCEPresetConfig = 7,
		GlobalModifierConfig = 8,
		AdventureModifierConfig = 9,
		GlobalRtModifierConfig = 10,
		ComplexSkillAIGlobalGroupConfig = 11,
		GlobalTaskTemplate = 12,
		CommonSkillPoolConfig = 13,
		GlobalFormationAsset = 14,
		Count = 15,
	};
}
