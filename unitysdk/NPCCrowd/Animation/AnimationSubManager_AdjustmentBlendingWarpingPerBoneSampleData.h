#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingTransformData_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4EF4D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x68DD70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData_TypeDefinitionIndex = 70445;

	struct alignas(4) AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData_TypeDefinitionIndex)->GetStaticField(0xFB10);
		}
		::UnityEngine::NapTransformData Transform; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> CurveRatio; // 0x40

		::System::Void _ctor(::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> curveRatio)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CTOR_OFFSET))(this, meshTransform, curveRatio);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CCTOR_OFFSET))();
		}
	};
}
