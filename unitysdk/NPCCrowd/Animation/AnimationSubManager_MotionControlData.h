#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKControl.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x102A4C90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MotionControlData_TypeDefinitionIndex = 57418;

	struct alignas(8) AnimationSubManager_MotionControlData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_MotionControlData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_MotionControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_MotionControlData_TypeDefinitionIndex)->GetStaticField(0xB360);
		}
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl LeftHand; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl RightHand; // 0x78
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl LeftFoot; // 0xE0
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl RightFoot; // 0x148
		::System::Single PelvisDelta; // 0x1B0
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl LookAt; // 0x1B4

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLDATA__CCTOR_OFFSET))();
		}
	};
}
