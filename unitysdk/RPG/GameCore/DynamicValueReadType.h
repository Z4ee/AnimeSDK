#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValueReadType_TypeDefinitionIndex = 10486;

	enum class DynamicValueReadType : ::System::Int32
	{
		None = 0,
		SkillParam = 1,
		SkillTreeParam = 2,
		SkillEquip = 3,
		SkillRank = 4,
		SkillRelic = 5,
		BattleEvent = 6,
		StageBattleEvent = 7,
		FloorCustomData = 8,
		Activity = 9,
		GridFight = 10,
		ClientOnly = 11,
	};
}
