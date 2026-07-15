#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LockSource_TypeDefinitionIndex = 9976;

	enum class LockSource : ::System::Int32
	{
		None = 0,
		UI = 1,
		UIWithoutSound = 2,
		TaskLockAll = 3,
		TaskLockPlayerControl = 4,
		TaskLockCamera = 5,
		LockBattle = 6,
		LockLevelGraph = 7,
		PauseGame = 8,
		ShowRareRewardHint = 9,
		Tutorial = 10,
		PhotoGraph = 11,
		FarmCocoonPage = 12,
		FakeAvatar = 13,
		LittleGame = 14,
		HideSummonUnit_All = 15,
		LookAtPhone = 16,
		Teleport = 17,
		PausePerformance = 18,
		SkipPerformance = 19,
		IsometricView = 20,
		WolfBroGame = 21,
		SwitchHandGame = 22,
		InstantKill = 23,
		GhostTrigger = 24,
		PropInteract = 25,
		FullScreenLock = 26,
		TimeRewindInteract = 27,
		FiveDim = 28,
		FiveDimTeleport = 29,
		FiveDimLittleGame = 30,
		ExclusiveFiveDim = 31,
		MascotCapture = 32,
		EraFloorLightFollowInteract = 33,
		LevelPerformance = 34,
		IdleLiveWaitLiveBegin = 35,
		IdleLiveHoldForUIWaitPacket = 36,
		_MaxCount = 37,
	};
}
