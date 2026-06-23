#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus_TypeDefinitionIndex = 62023;

	enum class UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus : ::System::Int32
	{
		TIME_LIMIT_CHALLENGE_TARGET = 64,
		NONE = 0,
		REWARDS = 16,
		LEVEL_QUEST = 8,
		CHALLENGE_TARGET = 4,
		SUB_BUFFS = 128,
		TITLE = 1,
		LEVEL_TIPS = 32,
		PROGRESS = 2,
		ALL = 2147483647,
	};
}
