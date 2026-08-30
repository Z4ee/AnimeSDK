#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2UIType_TypeDefinitionIndex = 75714;

	enum class DiceCombatV2UIType : ::System::Int32
	{
		None = 0,
		MainPage = 1,
		GameLoadingDialog = 2,
		BattleResultPage = 3,
		PvEBattlePreparePage = 4,
		PVPBattlePreparePage = 5,
		PVESelectStagePage = 6,
		PVPSelectStagePage = 7,
		TeamEditDialog = 8,
		ShopPage = 9,
		CollectionPage = 10,
		ChangeDicePage = 11,
		CardLevelUpPage = 12,
		FriendListDialog = 13,
		ScoreRewardPage = 14,
	};
}
