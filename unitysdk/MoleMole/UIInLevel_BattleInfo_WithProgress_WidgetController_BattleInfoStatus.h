#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus_TypeDefinitionIndex = 45050;

	enum class UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus : ::System::Int32
	{
		TIME_LIMIT_CHALLENGE_TARGET = 64,
		ALL = 2147483647,
		LEVEL_QUEST = 8,
		TITLE = 1,
		SUB_BUFFS = 128,
		REWARDS = 16,
		NONE = 0,
		CHALLENGE_TARGET = 4,
		LEVEL_TIPS = 32,
		PROGRESS = 2,
	};
}
