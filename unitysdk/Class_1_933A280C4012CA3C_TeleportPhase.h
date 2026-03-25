#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_933A280C4012CA3C_TeleportPhase_TypeDefinitionIndex = 49040;

enum class Class_1_933A280C4012CA3C_TeleportPhase : ::System::Int32
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
