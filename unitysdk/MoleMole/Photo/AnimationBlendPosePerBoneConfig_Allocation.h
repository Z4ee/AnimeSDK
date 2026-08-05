#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneConfig_Allocation_TypeDefinitionIndex = 47218;

	enum class AnimationBlendPosePerBoneConfig_Allocation : ::System::Int32
	{
		PoseWeights = 1,
		BoneWeights = 0,
		Count = 2,
	};
}
