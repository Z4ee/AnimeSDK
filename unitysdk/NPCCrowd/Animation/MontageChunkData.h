#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageChunkData_TypeDefinitionIndex = 77933;

	struct alignas(4) MontageChunkData
	{
		::NPCCrowd::Animation::MontageClipData clipData; // 0x10
		::System::Int32 prevIndex; // 0x38
		::System::Int32 nextIndex; // 0x3C
	};
}
