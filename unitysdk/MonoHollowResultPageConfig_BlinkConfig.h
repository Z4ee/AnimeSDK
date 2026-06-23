#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int MonoHollowResultPageConfig_BlinkConfig_TypeDefinitionIndex = 74966;

struct alignas(4) MonoHollowResultPageConfig_BlinkConfig
{
	::System::Int32 TextureIndex1; // 0x10
	::System::Single DelayTime1; // 0x14
	::System::Int32 TextureIndex2; // 0x18
	::System::Single DelayTime2; // 0x1C
};
