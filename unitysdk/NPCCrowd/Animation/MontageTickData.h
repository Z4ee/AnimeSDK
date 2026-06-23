#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTickData_TypeDefinitionIndex = 74565;

	struct alignas(4) MontageTickData
	{
		::System::Int32 initIndex; // 0x10
		::System::Int32 index; // 0x14
		::System::Single time; // 0x18
		::System::Single passedClipTime; // 0x1C
		::System::Single layerTime; // 0x20
		::System::Single layerLength; // 0x24
		::System::Single layerPlaySpeed; // 0x28
		::System::Boolean layerIsLoop; // 0x2C
		::System::Int32 sourceMontageKey; // 0x30
		::System::Int32 sourcePriorityLayer; // 0x34
	};
}
