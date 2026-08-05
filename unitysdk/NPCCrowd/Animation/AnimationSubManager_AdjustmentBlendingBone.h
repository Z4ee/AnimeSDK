#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingBone_TypeDefinitionIndex = 88261;

	enum class AnimationSubManager_AdjustmentBlendingBone : ::System::Int32
	{
		Spine = 5,
		Root = 0,
		Pelvis = 4,
		Neck = 8,
		Count = 11,
		LeftHand = 9,
		RightHand = 10,
		Bip001 = 3,
		Spine1 = 6,
		RightFoot = 2,
		LeftFoot = 1,
		Spine2 = 7,
	};
}
