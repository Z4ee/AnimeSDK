#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class ClipTextureEntry; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }

#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_PENDINGUNLOADENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdClipTextureManager_PendingUnloadEntry_TypeDefinitionIndex = 84947;

	struct alignas(8) NPCCrowdClipTextureManager_PendingUnloadEntry
	{
		::NPCCrowd::Animation::NPCCrowdAnimationData* data; // 0x10
		::NPCCrowd::Animation::ClipTextureEntry* entry; // 0x18

		::System::Void _ctor(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::ClipTextureEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::ClipTextureEntry*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_PENDINGUNLOADENTRY__CTOR_OFFSET))(this, data, entry);
		}
	};
}
