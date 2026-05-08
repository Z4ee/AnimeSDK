#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCPUAnimatorRuntimeInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLEINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8E40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCustomIdleManager_CustomIdleInstanceData_TypeDefinitionIndex = 38862;

	struct alignas(4) NPCCustomIdleManager_CustomIdleInstanceData
	{
		::System::UInt32 ownerEntityID; // 0x10
		::System::Int32 boneStartIndex; // 0x14
		::System::Int32 boneCount; // 0x18
		::System::Int32 avatarIndex; // 0x1C
		::System::Int32 requestIndex; // 0x20
		::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData data; // 0x24
		::NPCCrowd::Animation::NPCAnimationLib_AnimationId animationId; // 0x78

		::System::Void _ctor(::System::UInt32 ownerEntityID, ::System::Int32 boneStartIndex, ::System::Int32 boneCount, ::System::Int32 avatarIndex, ::System::Int32 requestIndex, ::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData data, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId animationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CUSTOMIDLEINSTANCEDATA__CTOR_OFFSET))(this, ownerEntityID, boneStartIndex, boneCount, avatarIndex, requestIndex, data, animationId);
		}
	};
}
