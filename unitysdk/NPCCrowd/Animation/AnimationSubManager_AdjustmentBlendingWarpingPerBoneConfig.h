#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingTransformData_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarSkeletonBoneIndex.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_COLLECT_OFFSET UNITYSDK_OFFSET(0xD5C5AB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEID_OFFSET UNITYSDK_OFFSET(0x5B22C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x5B22F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__COLLECT_G__GENERATEPERBONECONFIG_5_0_OFFSET UNITYSDK_OFFSET(0xD5C5C80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4260)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig_TypeDefinitionIndex = 57394;

	struct alignas(4) AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig
	{
		::System::Int32 BoneIndex; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Int32> Curves; // 0x14

		::System::Void _ctor(::System::Int32 boneIndex, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Int32> curves)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__CTOR_OFFSET))(this, boneIndex, curves);
		}

		/*
		::System::Void FetchCurveId(::System::Span_1<::System::Int32> curves, ::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Int32>, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEID_OFFSET))(this, curves, index);
		}
		*/

		/*
		::System::Void FetchCurveValue(::System::ReadOnlySpan_1<::System::Single> values, ::System::Int32& index, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>& result)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Single>, ::System::Int32&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEVALUE_OFFSET))(this, values, index, result);
		}
		*/

		/*
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig> Collect(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_COLLECT_OFFSET))(avatar);
		}
		*/

		/*
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig _Collect_g__GeneratePerBoneConfig_5_0(::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex boneIndex, ::System::Int32 curveIndex, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig___c__DisplayClass5_0& a3)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__COLLECT_G__GENERATEPERBONECONFIG_5_0_OFFSET))(boneIndex, curveIndex, a3);
		}
		*/
	};
}
