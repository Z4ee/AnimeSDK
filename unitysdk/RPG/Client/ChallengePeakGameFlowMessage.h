#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameFlowMessage_TypeDefinitionIndex = 60387;

	enum class ChallengePeakGameFlowMessage : ::System::Int32
	{
		None = 0,
		ShowEntrance = 1,
		ShowPeakDetail = 2,
		ShowPeakTeamEdit = 3,
		ShowBossTeamEdit = 4,
		ForceShowBossTeamEdit = 5,
		ShowBossBuffSelect = 6,
		SwitchBossHardMode = 7,
		InitNormalLineups = 8,
		SaveNormalLineups = 9,
		RevokeNormalLineups = 10,
		ClearNormalLineupModification = 11,
		ClearNormalLineups = 12,
		SetBuffBoss = 13,
		ChallengeMonster = 14,
		ChallengeBoss = 15,
		ForceChallengeBoss = 16,
		ShowEnvironmentHint = 17,
		ShowMazeTopHint = 18,
		RestartChallenge = 19,
		LeaveChallenge = 20,
		LeaveBattle = 21,
		ShowPeakBossSettlement = 22,
		ShowPeakMonsterSettlement = 23,
		ShowBossWeakenHint = 24,
		ApplyTeam = 25,
		ShowSettleConfirm = 26,
		ConfirmSettle = 27,
		OnRecordChanged = 28,
		OnTeamChanged = 29,
		OnNormalLineupSaved = 30,
		OnQuickPassHintClosed = 31,
		OnThemePageExited = 32,
	};
}
