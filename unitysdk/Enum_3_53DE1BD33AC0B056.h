#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_53DE1BD33AC0B056_TypeDefinitionIndex = 47070;

enum class Enum_3_53DE1BD33AC0B056 : ::System::UInt32
{
	Pending = 0x2,
	Init = 0x1,
	Running = 0x20,
	Interrupt = 0x1000,
	Inactive = 0xFC00,
	Killed = 0x4000,
	None = 0x0,
	Pause = 0x2000,
	Died = 0x8000,
	Reach = 0x40,
	Active = 0x7C,
	FadeOut = 0x8,
	Invalid = 0xCC00,
	FadeIn = 0x4,
	Resume = 0x10,
	Finish = 0x800,
	RunFail = 0x400,
};
