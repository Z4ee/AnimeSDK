#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_A794720E3EA5DFF0_State_TypeDefinitionIndex = 63556;

enum class Class_1_A794720E3EA5DFF0_State : ::System::Int32
{
	Idle = 0,
	WaitDelay = 1,
	WaitGlobalCoolDown = 2,
	ReadyToSend = 3,
	WaitCoolDown = 4,
};
