#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LerpFloatFunc.h"
#include "unitysdk/Foundation/Lerped_2.h"
#include "unitysdk/MoleMole/Photo/AnimationTwoBoneIKFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_TWOBONESIKCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x115077B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKControl_TypeDefinitionIndex = 70492;

	struct alignas(8) AnimationSubManager_TwoBonesIKControl
	{
		static ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl* StaticGet_Zero()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TwoBonesIKControl_TypeDefinitionIndex)->GetStaticField(0xC6D0);
		}
		::UnityEngine::NapTransformData Effector; // 0x10
		::UnityEngine::Vector3 JointTarget; // 0x40
		::MoleMole::Photo::AnimationTwoBoneIKFlag Flags; // 0x4C
		::Foundation::Lerped_2<::System::Single, ::Foundation::LerpFloatFunc> Weight; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_TWOBONESIKCONTROL__CCTOR_OFFSET))();
		}
	};
}
