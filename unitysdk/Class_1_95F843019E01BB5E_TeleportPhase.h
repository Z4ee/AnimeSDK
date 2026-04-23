#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_95F843019E01BB5E_TeleportPhase_TypeDefinitionIndex = 55834;

enum class Class_1_95F843019E01BB5E_TeleportPhase : ::System::Int32
{
	Invalid = 0,
	Start = 1,
	WaitingScreenTransferIn = 2,
	WaitingStreaming = 3,
	WaitingNetwork = 4,
	DoTeleport = 5,
	WaitingCameraAndPlayerReady = 6,
	WaitingCameraBlendFinish = 7,
	WaitingScreenTransferOut = 8,
	Finish = 9,
};
