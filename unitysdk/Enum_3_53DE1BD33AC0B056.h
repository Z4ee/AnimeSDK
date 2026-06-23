#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_53DE1BD33AC0B056_TypeDefinitionIndex = 52276;

enum class Enum_3_53DE1BD33AC0B056 : ::System::UInt32
{
	Invalid = 0xCC00,
	RunFail = 0x400,
	Running = 0x20,
	Died = 0x8000,
	Interrupt = 0x1000,
	FadeIn = 0x4,
	Active = 0x7C,
	Killed = 0x4000,
	Pause = 0x2000,
	Pending = 0x2,
	Inactive = 0xFC00,
	Resume = 0x10,
	Reach = 0x40,
	FadeOut = 0x8,
	None = 0x0,
	Init = 0x1,
	Finish = 0x800,
};
