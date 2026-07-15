#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupSkillTreePreset_TypeDefinitionIndex = 17391;

	enum class BattleLineupSkillTreePreset : ::System::Int32
	{
		None = 0,
		Lv1 = 1,
		LvMax = 2,
		MaxWithInLevel = 3,
		Count = 4,
	};
}
