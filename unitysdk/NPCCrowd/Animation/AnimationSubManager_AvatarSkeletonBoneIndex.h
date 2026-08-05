#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarSkeletonBoneIndex_TypeDefinitionIndex = 88300;

	enum class AnimationSubManager_AvatarSkeletonBoneIndex : ::System::Int32
	{
		Max = 14,
		LeftHand = 6,
		LeftToe = 12,
		RightFoot = 5,
		Spine1 = 9,
		Pelvis = 3,
		Bip001 = 1,
		Root = 0,
		RightToe = 13,
		Bip001Head = 2,
		Spine2 = 10,
		Neck = 11,
		RightHand = 7,
		LeftFoot = 4,
		Spine = 8,
	};
}
