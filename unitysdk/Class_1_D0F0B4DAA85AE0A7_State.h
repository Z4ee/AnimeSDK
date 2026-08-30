#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_D0F0B4DAA85AE0A7_State_TypeDefinitionIndex = 60831;

enum class Class_1_D0F0B4DAA85AE0A7_State : ::System::Int32
{
	Idle = 0,
	Covering = 1,
	WaitUI3DLoad = 2,
	WaitCoverExit = 3,
	Tail = 4,
};
