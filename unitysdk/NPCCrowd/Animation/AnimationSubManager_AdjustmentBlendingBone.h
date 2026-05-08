#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingBone_TypeDefinitionIndex = 70495;

	enum class AnimationSubManager_AdjustmentBlendingBone : ::System::Int32
	{
		Pelvis = 4,
		LeftFoot = 1,
		Spine1 = 6,
		Count = 11,
		Spine = 5,
		LeftHand = 9,
		Spine2 = 7,
		Bip001 = 3,
		Neck = 8,
		Root = 0,
		RightFoot = 2,
		RightHand = 10,
	};
}
