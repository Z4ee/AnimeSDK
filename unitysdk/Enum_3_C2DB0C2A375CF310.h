#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_C2DB0C2A375CF310_TypeDefinitionIndex = 88377;

enum class Enum_3_C2DB0C2A375CF310 : ::System::Byte
{
	TransitionStart = 0x4,
	ReplacedTop = 0x3,
	TransitionEnd = 0x5,
	TopChanged = 0x7,
	CmdApplied = 0x0,
	LayerReleased = 0x8,
	Popped = 0x2,
	HardSwitch = 0x6,
	Pushed = 0x1,
};
