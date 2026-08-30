#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlowMessage_TypeDefinitionIndex = 75638;

	enum class DiceCombatGameFlowMessage : ::System::Int32
	{
		None = 0,
		ShowMainPage = 1,
		ShowBeforeActivityMainPage = 2,
		ShowNPCEntrancePage = 3,
		ShowPVEBattlePreparePage = 4,
		ShowPVPBattlePreparePage = 5,
		ShowFriendPVPBattlePreparePage = 6,
		ShowTeamEditDialog = 7,
		ShowNPCEntranceCardDisplayDialog = 8,
		ShowPVEProgressPage = 9,
		ShowGameLoadingDialog = 10,
		ShowFriendListDialog = 11,
		ShowGameResultPage = 12,
		ShowShopPage = 13,
		ShowCollectionPage = 14,
		ShowCardLevelUpPage = 15,
		ShowChangeDicePage = 16,
		OnPVEProgressPageExit = 17,
		OnFinishStageProgressPageExit = 18,
		SetPlayerTeamAvatars = 19,
		StartPVEGame = 20,
		StartPVPMatch = 21,
		CancelPVPMatch = 22,
		StartPVPGame = 23,
		ExitGameResult = 24,
		QuitGame = 25,
		InviteFriendPVP = 26,
		FinishPvEBattle = 27,
	};
}
