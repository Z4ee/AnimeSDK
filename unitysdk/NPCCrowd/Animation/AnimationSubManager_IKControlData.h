#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKControl.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IKCONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10660F00)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_IKControlData_TypeDefinitionIndex = 88265;

	struct alignas(8) AnimationSubManager_IKControlData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_IKControlData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_IKControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_IKControlData_TypeDefinitionIndex)->GetStaticField(0xB700);
		}
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl LookAt; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl LeftHand; // 0x48
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl RightHand; // 0xB0
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl LeftFoot; // 0x118
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl RightFoot; // 0x180

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IKCONTROLDATA__CCTOR_OFFSET))();
		}
	};
}
