#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarSkeletonBoneIndex_TypeDefinitionIndex = 57351;

	enum class AnimationSubManager_AvatarSkeletonBoneIndex : ::System::Int32
	{
		Neck = 11,
		Root = 0,
		LeftHand = 6,
		RightHand = 7,
		RightToe = 13,
		Spine1 = 9,
		Spine = 8,
		Pelvis = 3,
		LeftFoot = 4,
		Spine2 = 10,
		RightFoot = 5,
		Max = 14,
		LeftToe = 12,
		Bip001 = 1,
		Bip001Head = 2,
	};
}
