#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_C2DB0C2A375CF310_TypeDefinitionIndex = 56686;

enum class Enum_3_C2DB0C2A375CF310 : ::System::Byte
{
	HardSwitch = 0x6,
	Pushed = 0x1,
	Popped = 0x2,
	LayerReleased = 0x8,
	TransitionStart = 0x4,
	ReplacedTop = 0x3,
	CmdApplied = 0x0,
	TransitionEnd = 0x5,
	TopChanged = 0x7,
};
