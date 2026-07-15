#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlowMessage_TypeDefinitionIndex = 59092;

	enum class ParkourGameFlowMessage : ::System::Int32
	{
		None = 0,
		ShowEntrancePage = 1,
		ShowLevelDetailPage = 2,
		ShowBallDetailPage = 3,
		ShowSettlementPage = 4,
		ShowPauseDialog = 5,
		ShowGameMainPage = 6,
		GameReady = 7,
		GameStart = 8,
		SpeedUp = 9,
		UseSkill = 10,
		ReadyGo = 11,
		Go = 12,
		UpdateLockTarget = 13,
		LastLap = 14,
		PauseGame = 15,
		ContinueGame = 16,
		ResumeGame = 17,
		ReplayGame = 18,
		ExitGame = 19,
		RestartGame = 20,
		CloseGame = 21,
		LeftPress = 22,
		LeftRelease = 23,
		RightPress = 24,
		RightRelease = 25,
		UpdateUI = 26,
		TriggerTalk = 27,
		UpdateCrossroadInfo = 28,
		SuperStarSkill = 29,
		StartPlayBGM = 30,
		UpdateSkill = 31,
		SetCountDownAnimSpeed = 32,
	};
}
