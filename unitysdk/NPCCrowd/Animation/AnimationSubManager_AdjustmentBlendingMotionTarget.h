#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGMOTIONTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0xF76D7D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingMotionTarget_TypeDefinitionIndex = 88266;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingMotionTarget
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingMotionTarget_TypeDefinitionIndex)->GetStaticField(0xBC90);
		}
		::UnityEngine::NapTransformData GlobalTarget; // 0x10
		::System::Single DeltaAngle; // 0x40
		::System::Double EndTimestamp; // 0x48
		::System::Boolean IsTriggered; // 0x50
		::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> Bones; // 0x54

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGMOTIONTARGET__CCTOR_OFFSET))();
		}
	};
}
