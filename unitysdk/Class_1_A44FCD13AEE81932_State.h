#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_A44FCD13AEE81932_State_TypeDefinitionIndex = 58262;

enum class Class_1_A44FCD13AEE81932_State : ::System::Int32
{
	WaitStart = 0,
	WaitRsp = 1,
	RspWin = 2,
	RspFail = 3,
	RspKickOut = 4,
	RspError = 5,
	RspTimeOut = 6,
	OutOfDate = 7,
	Finalize = 8,
};
