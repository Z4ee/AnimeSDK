#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTickData_TypeDefinitionIndex = 40886;

	struct alignas(4) MontageTickData
	{
		::System::Int32 initIndex; // 0x10
		::System::Int32 index; // 0x14
		::System::Single time; // 0x18
		::System::Single passedClipTime; // 0x1C
	};
}
