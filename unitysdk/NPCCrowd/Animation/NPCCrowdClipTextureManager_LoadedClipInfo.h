#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class ClipTextureEntry; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdClipTextureManager_LoadedClipInfo_TypeDefinitionIndex = 84949;

	struct alignas(8) NPCCrowdClipTextureManager_LoadedClipInfo
	{
		::NPCCrowd::Animation::NPCCrowdAnimationData* data; // 0x10
		::NPCCrowd::Animation::ClipTextureEntry* entry; // 0x18
	};
}
