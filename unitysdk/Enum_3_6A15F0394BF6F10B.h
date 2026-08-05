#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_6A15F0394BF6F10B_TypeDefinitionIndex = 48895;

enum class Enum_3_6A15F0394BF6F10B : ::System::UInt16
{
	ConfirmedMarkOnly = 0x8000,
	SingleSelected = 0x2,
	BlockSelection = 0x4000,
	None = 0x0,
	MultiSelected = 0x4,
	Unselectable = 0x8,
	OtherTeam = 0x10,
	PreemptibleOtherTeam = 0x20,
	Confirmed = 0x8001,
};
