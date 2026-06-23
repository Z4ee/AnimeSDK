#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_6A15F0394BF6F10B_TypeDefinitionIndex = 74689;

enum class Enum_3_6A15F0394BF6F10B : ::System::UInt16
{
	BlockSelection = 0x4000,
	None = 0x0,
	ConfirmedMarkOnly = 0x8000,
	PreemptibleOtherTeam = 0x20,
	Confirmed = 0x8001,
	Unselectable = 0x8,
	OtherTeam = 0x10,
	SingleSelected = 0x2,
	MultiSelected = 0x4,
};
