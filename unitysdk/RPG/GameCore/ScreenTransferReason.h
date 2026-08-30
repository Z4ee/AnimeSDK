#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferReason_TypeDefinitionIndex = 24501;

	enum class ScreenTransferReason : ::System::Int32
	{
		Default = 0,
		Mission = 1,
		GroupChange = 2,
		MapSwitchOrTeleport = 3,
		HoYoGroup = 4,
		ConnectMissionToGroup = 5,
		LittleGame = 6,
		TeleportInMap = 7,
		FiveDimGame = 8,
		PerformanceSkip = 9,
		PerformanceReplay = 10,
		IdleLiveWaitFinalActReady = 11,
		MapRotationTeleport = 12,
		BlackScreenMask = 13,
		LiveFix01 = 51,
		LiveFix02 = 52,
		LiveFix03 = 53,
		LiveFix04 = 54,
	};
}
