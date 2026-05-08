#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class NPCUnionAnimator; }

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem_RendererVisibilityRange_TypeDefinitionIndex = 70396;

	struct alignas(8) NPCCrowdLodSubSystem_RendererVisibilityRange
	{
		::NPCCrowd::Animation::NPCUnionAnimator* animator; // 0x10
		::System::Int32 startIndex; // 0x18
		::System::Int32 count; // 0x1C
	};
}
