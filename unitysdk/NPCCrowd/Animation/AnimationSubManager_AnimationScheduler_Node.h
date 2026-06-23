#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_NodeFlag.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_NODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x592B90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_Node_TypeDefinitionIndex = 57452;

	struct alignas(8) AnimationSubManager_AnimationScheduler_Node
	{
		::Foundation::BitSet64 Prerequisite; // 0x10
		::Foundation::BitSet64 Subsequent; // 0x18
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_NodeFlag Flag; // 0x20

		::System::Boolean Equals(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_NODE_EQUALS_OFFSET))(this, other);
		}
	};
}
