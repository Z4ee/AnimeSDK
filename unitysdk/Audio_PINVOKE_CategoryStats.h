#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_CategoryStats_TypeDefinitionIndex = 67766;

struct alignas(8) Audio_PINVOKE_CategoryStats
{
	::System::UInt64 uUsed; // 0x10
	::System::UInt64 uPeakUsed; // 0x18
	::System::UInt32 uAllocs; // 0x20
	::System::UInt32 uFrees; // 0x24
};
