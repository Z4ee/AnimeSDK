#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_GlobalStats_TypeDefinitionIndex = 80174;

struct alignas(8) Audio_PINVOKE_GlobalStats
{
	::System::UInt64 uUsed; // 0x10
	::System::UInt64 uDeviceUsed; // 0x18
	::System::UInt64 uReserved; // 0x20
	::System::UInt64 uMax; // 0x28
};
