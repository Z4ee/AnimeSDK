#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneCollection_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneControlData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x5EE5C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GETBONEFLAGS_OFFSET UNITYSDK_OFFSET(0x5EE5B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x5EE400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_RESET_OFFSET UNITYSDK_OFFSET(0x5EE410)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE017A80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingControlData_TypeDefinitionIndex = 57355;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingControlData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingControlData_TypeDefinitionIndex)->GetStaticField(0xB720);
		}
		::System::Int32 ClipId; // 0x10
		::System::Double BeginTime; // 0x18
		::System::Double EndTime; // 0x20
		::System::Double BeginTimestamp; // 0x28
		::System::Single ClipLength; // 0x30
		::UnityEngine::NapTransformData Loop; // 0x34
		::UnityEngine::NapTransformData Origin; // 0x64
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData> Data; // 0x94

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GET_ISNULL_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_RESET_OFFSET))(this);
		}

		/*
		::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> GetBoneFlags()
		{
			return ((::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GETBONEFLAGS_OFFSET))(this);
		}
		*/

		::System::Boolean Contains(::System::Double timestamp, ::System::Int32 clipId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_CONTAINS_OFFSET))(this, timestamp, clipId);
		}
	};
}
