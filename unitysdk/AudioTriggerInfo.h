#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int AudioTriggerInfo_TypeDefinitionIndex = 47977;

struct alignas(4) AudioTriggerInfo
{
	::System::Boolean ShouldTrigger; // 0x10
	::System::Single SignalValue; // 0x14
};
