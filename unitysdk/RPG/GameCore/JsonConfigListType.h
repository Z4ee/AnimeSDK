#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonConfigListType_TypeDefinitionIndex = 45442;

	enum class JsonConfigListType : ::System::Int32
	{
		AdventureAbilityConfig = 0,
		TurnBasedAbilityConfig = 1,
		ChessAbilityConfig = 2,
		BattleLineupConfig = 3,
		BattleLineupAvatarConfig = 4,
		BattleLineupMazeBuffConfig = 5,
		BattleLineupSkillTreePresetConfig = 6,
		BattleLineupCEPresetConfig = 7,
		GlobalModifierConfig = 8,
		AdventureModifierConfig = 9,
		ComplexSkillAIGlobalGroupConfig = 10,
		GlobalTaskTemplate = 11,
		CommonSkillPoolConfig = 12,
		GlobalFormationAsset = 13,
		Count = 14,
	};
}
