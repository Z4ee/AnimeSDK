#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlowMessage_TypeDefinitionIndex = 69951;

	enum class DiceCombatV2GameFlowMessage : ::System::Int32
	{
		None = 0,
		ShowMainPage = 1,
		ShowGameLoadingDialog = 2,
		ShowBattleResultPage = 3,
		ShowPvEBattlePreparePage = 4,
		ShowPVPBattlePreparePage = 5,
		ShowPVESelectStagePage = 6,
		ShowPVPSelectStagePage = 7,
		ShowTeamEditDialog = 8,
		ShowShopPage = 9,
		ShowCollectionPage = 10,
		ShowChangeDicePage = 11,
		ShowCardLevelUpPage = 12,
		ShowFriendListDialog = 13,
		ShowScoreRewardPage = 14,
		EnterPVESelectStage = 15,
		SetSelectedAvatarID = 16,
		StartPvEGame = 17,
		EnterPVPLobby = 18,
		StartPVPMatch = 19,
		InviteFriendPVP = 20,
		StartPvPGame = 21,
		ExitBattleResultPage = 22,
		BackToMainPageFromPVPResultPage = 23,
		FinishPvEBattle = 24,
		QuitGame = 25,
	};
}
