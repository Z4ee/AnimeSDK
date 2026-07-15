#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateMasterTalkSituation_TypeDefinitionIndex = 11097;

	enum class FateMasterTalkSituation : ::System::Int32
	{
		None = 0,
		PreBattleOverview = 1,
		PreBattleVS = 2,
		PostBattleVS_Win = 3,
		PostBattleVS_Win_RivalDead = 4,
		PostBattleVS_Lose = 5,
		PostBattleVS_Lose_Dead = 6,
		PostBattleOverview_Win = 7,
		PostBattleOverview_Win_RivalDead = 8,
		PostBattleOverview_Lose = 9,
		PostBattleOverview_Lose_Dead = 10,
	};
}
