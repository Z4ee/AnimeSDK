#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2;

inline static constexpr unsigned int MonoUITableScrollV2_ScrollMeta_TypeDefinitionIndex = 75041;

struct alignas(8) MonoUITableScrollV2_ScrollMeta
{
	::MonoUITableScrollV2* scrollView; // 0x10
	::System::Single CurrentPosition; // 0x18
	::System::Single ScrollDelta; // 0x1C
};
