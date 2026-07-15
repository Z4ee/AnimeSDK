#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersusBarQuestStatus_TypeDefinitionIndex = 23833;

	enum class VersusBarQuestStatus : ::System::Int32
	{
		Normal = 0,
		EnemyQuest = 1,
		TeamQuest = 2,
		EnemyFever = 3,
		TeamFever = 4,
		TeamBonus = 5,
		Success = 6,
		Fail = 7,
	};
}
