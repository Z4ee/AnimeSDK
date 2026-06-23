#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_C2DB0C2A375CF310_TypeDefinitionIndex = 56310;

enum class Enum_3_C2DB0C2A375CF310 : ::System::Byte
{
	TransitionEnd = 0x5,
	Popped = 0x2,
	ReplacedTop = 0x3,
	TopChanged = 0x7,
	TransitionStart = 0x4,
	Pushed = 0x1,
	LayerReleased = 0x8,
	HardSwitch = 0x6,
	CmdApplied = 0x0,
};
