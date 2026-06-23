#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPerBoneCollection_1_TypeDefinitionIndex = 57414;

	template <typename T>
	struct AnimationSubManager_AdjustmentBlendingPerBoneCollection_1
	{
		T Root; // 0x0
		T LeftFoot; // 0x0
		T RightFoot; // 0x0
		T Bip001; // 0x0
		T Pelvis; // 0x0
		T Spine; // 0x0
		T Spine1; // 0x0
		T Spine2; // 0x0
		T Neck; // 0x0
		T LeftHand; // 0x0
		T RightHand; // 0x0
	};
}
