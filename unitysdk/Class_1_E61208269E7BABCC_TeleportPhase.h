#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_E61208269E7BABCC_TeleportPhase_TypeDefinitionIndex = 56589;

enum class Class_1_E61208269E7BABCC_TeleportPhase : ::System::Int32
{
	Invalid = 0,
	Start = 1,
	WaitingScreenTransferIn = 2,
	WaitingTargetGroupLoaded = 3,
	WaitingStreaming = 4,
	WaitingNetwork = 5,
	DoTeleport = 6,
	WaitingCameraAndPlayerReady = 7,
	WaitingCameraBlendFinish = 8,
	WaitingScreenTransferOut = 9,
	Finish = 10,
};
