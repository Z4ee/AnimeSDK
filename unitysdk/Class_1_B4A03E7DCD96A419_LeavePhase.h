#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_B4A03E7DCD96A419_LeavePhase_TypeDefinitionIndex = 57814;

enum class Class_1_B4A03E7DCD96A419_LeavePhase : ::System::Int32
{
	Invalid = 0,
	Start = 1,
	WaitingScreenTransferIn = 2,
	WaitingNetwork = 3,
	DoMapRotation = 4,
	WaitingMapRotationFinish = 5,
	DoLeave = 6,
	WaitingStreaming = 7,
	WaitingScreenTransferOut = 8,
	Finish = 9,
};
