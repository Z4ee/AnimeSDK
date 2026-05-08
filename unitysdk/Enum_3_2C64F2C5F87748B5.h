#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_2C64F2C5F87748B5_TypeDefinitionIndex = 42207;

enum class Enum_3_2C64F2C5F87748B5 : ::System::UInt16
{
	DoTickIfNoStartAction = 0x10,
	TickStarted = 0x4000,
	ExplictCompleteTime = 0x4,
	None = 0x0,
	Activated = 0x8000,
	PreciselyTick = 0x8,
	ExplictStartTime = 0x2,
	OnStopClearFlags = 0xC006,
	ManualLifeCycle = 0x1,
};
