#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonConfigListType_TypeDefinitionIndex = 56508;

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
		BattleLineupDevPresetConfig = 8,
		GlobalModifierConfig = 9,
		AdventureModifierConfig = 10,
		GlobalRtModifierConfig = 11,
		ComplexSkillAIGlobalGroupConfig = 12,
		GlobalTaskTemplate = 13,
		CommonSkillPoolConfig = 14,
		GlobalFormationAsset = 15,
		Count = 16,
	};
}
