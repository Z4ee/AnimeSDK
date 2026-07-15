#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_2D9DFBB7E80A4185_TeleportPhase_TypeDefinitionIndex = 57835;

enum class Class_2_2D9DFBB7E80A4185_TeleportPhase : ::System::Int32
{
	Invalid = 0,
	Start = 1,
	WaitingScreenTransferIn = 2,
	WaitingNetwork = 3,
	DoLeaveFiveDim = 4,
	WaitingLeaveStreaming = 5,
	DoEnterFourRotate = 6,
	WaitingFourRotateEnter = 7,
	WaitingScreenTransferOut = 8,
	Finish = 9,
};
