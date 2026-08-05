#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKJointAssignPolicy.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKSetting_TypeDefinitionIndex = 88330;

	struct alignas(4) AnimationSubManager_TwoBonesIKSetting
	{
		::Struct_2_6402D4A3EAB8BDC8 EndBoneIndex; // 0x10
		::Struct_2_6402D4A3EAB8BDC8 MiddleBoneIndex; // 0x14
		::Struct_2_6402D4A3EAB8BDC8 BeginBoneIndex; // 0x18
		::System::Single StartStretchRatio; // 0x1C
		::System::Single MaxStretchScale; // 0x20
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKJointAssignPolicy JointPolicy; // 0x24
		::UnityEngine::Vector3 JointMetaParam; // 0x28
	};
}
