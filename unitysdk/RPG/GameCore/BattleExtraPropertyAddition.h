#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraPropertyAddition_TypeDefinitionIndex = 23897;

	enum class BattleExtraPropertyAddition : ::System::Int32
	{
		RelicValueExtraAdditionRatio = 0,
		EquipValueExtraAdditionRatio = 1,
		EquipExtraRank = 2,
		AvatarExtraRank = 3,
		AvatarExtraSkillTreeLevel = 4,
	};
}
