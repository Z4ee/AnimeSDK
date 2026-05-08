#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookControllerParam.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_LOOKATIKCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x11507760)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_LookAtIKControl_TypeDefinitionIndex = 70513;

	struct alignas(4) AnimationSubManager_LookAtIKControl
	{
		static ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl* StaticGet_Zero()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_LookAtIKControl_TypeDefinitionIndex)->GetStaticField(0xC740);
		}
		::UnityEngine::Vector3 Effector; // 0x10
		::UnityEngine::Vector3 Target; // 0x1C
		::System::Single Weight; // 0x28
		::NPCCrowd::Animation::AnimationSubManager_LookControllerParam controllerParam; // 0x2C
		::System::Boolean Locking; // 0x44

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_LOOKATIKCONTROL__CCTOR_OFFSET))();
		}
	};
}
