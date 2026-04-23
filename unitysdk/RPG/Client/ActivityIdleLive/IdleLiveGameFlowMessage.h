#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGameFlowMessage_TypeDefinitionIndex = 69357;

	enum class IdleLiveGameFlowMessage : ::System::Int32
	{
		None = 0,
		FinishEventNode = 1,
		GotoNextNode = 2,
		GotoPrevBattleNode = 3,
		EnterRecordBattle = 4,
		ShowGamePlayPage = 5,
		ShowCharacterMeetPerform = 6,
		ShowAvatarNewGot = 7,
		ManualOpenChest = 9,
		ReplaceOldEquip = 10,
		KeepOldEquip = 11,
		SelectEquip = 13,
		GotoNextBattleNode = 16,
		ShowDataInfoDialog = 17,
		BattleNodeEntered = 18,
		QuitBattle = 20,
		PrepareFinalAct = 21,
		ShowStageProgressPage = 22,
		QuitBattleWithoutReq = 23,
		PrepareForRecordBattle = 24,
		PrepareForDungeonBattle = 25,
		EnterDungeonBattle = 26,
		PrepareOfflineRewards = 27,
		ReEnterCurNode = 28,
		PlayFinalAct = 29,
		FinalActPlayed = 30,
		ReEnterCurNodeToReplaceTeam = 31,
		AddGiftToShow = 32,
		ToSecondaryInterface = 33,
		BackToMainInterface = 34,
		SetNeedShowPreparing = 35,
		SetNeedShowStageProgressOnEnter = 36,
		EnterBattleWithoutReq = 37,
	};
}
