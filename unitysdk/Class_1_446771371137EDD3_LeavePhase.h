#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_446771371137EDD3_LeavePhase_TypeDefinitionIndex = 60634;

enum class Class_1_446771371137EDD3_LeavePhase : ::System::Int32
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
