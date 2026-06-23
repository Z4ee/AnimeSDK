#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_2C64F2C5F87748B5_TypeDefinitionIndex = 79003;

enum class Enum_3_2C64F2C5F87748B5 : ::System::UInt16
{
	None = 0x0,
	ExplictCompleteTime = 0x4,
	OnStopClearFlags = 0xC006,
	TickStarted = 0x4000,
	ManualLifeCycle = 0x1,
	PreciselyTick = 0x8,
	ExplictStartTime = 0x2,
	DoTickIfNoStartAction = 0x10,
	Activated = 0x8000,
};
