#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GamePlayLockTarget_TypeDefinitionIndex = 9879;

	enum class GamePlayLockTarget : ::System::Int32
	{
		None = 0,
		PlayerControl = 1,
		Camera = 2,
		MainCameraLateUpdate = 3,
		MonsterAI = 4,
		EntityTimeScale = 5,
		EnvironmentTimeScale = 6,
		Sound = 7,
		MissionTalk = 8,
		Effect = 9,
		DebugUIInput = 10,
		InputControl = 11,
		UIFullScreenBlock = 12,
		ChallengeEventTimer = 13,
		GameWorldTimeScale = 14,
		LocalPlayerLookAt = 15,
		PerformanceMode = 16,
		PerformanceTimeScale = 17,
		CharacterIdleShow = 18,
		TaskOpenScreenTransfer = 19,
		HideSummonUnit_FollowUnit = 20,
		HideSummonUnit_Field = 21,
		HideSummonUnit_FollowField = 22,
		HideSummonUnit_StaticUnit = 23,
		HideAllHoYoGroup = 24,
		MapRotationPlayerEffect = 25,
		MapRotationVolume = 26,
		InstantKillToast = 27,
		GhostTriggerBanMazeSkill = 28,
		PropInteractMuteInputAction = 29,
		FormationMoveStream = 30,
	};
}
