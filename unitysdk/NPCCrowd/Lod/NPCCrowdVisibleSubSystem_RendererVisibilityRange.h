#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class NPCUnionAnimator; }

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdVisibleSubSystem_RendererVisibilityRange_TypeDefinitionIndex = 47200;

	struct alignas(8) NPCCrowdVisibleSubSystem_RendererVisibilityRange
	{
		::System::UInt32 entityId; // 0x10
		::NPCCrowd::Animation::NPCUnionAnimator* animator; // 0x18
		::System::Int32 startIndex; // 0x20
		::System::Int32 count; // 0x24
	};
}
