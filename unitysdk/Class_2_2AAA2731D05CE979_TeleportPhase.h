#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_2AAA2731D05CE979_TeleportPhase_TypeDefinitionIndex = 57830;

enum class Class_2_2AAA2731D05CE979_TeleportPhase : ::System::Int32
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
