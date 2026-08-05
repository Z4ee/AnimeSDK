#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus_TypeDefinitionIndex = 42480;

	enum class UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus : ::System::Int32
	{
		ALL = 2147483647,
		NONE = 0,
		LEVEL_TIPS = 32,
		PROGRESS = 2,
		CHALLENGE_TARGET = 4,
		TIME_LIMIT_CHALLENGE_TARGET = 64,
		REWARDS = 16,
		LEVEL_QUEST = 8,
		TITLE = 1,
		SUB_BUFFS = 128,
	};
}
