#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_D6681068F74FC3B8_LeavePhase_TypeDefinitionIndex = 56574;

enum class Class_1_D6681068F74FC3B8_LeavePhase : ::System::Int32
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
