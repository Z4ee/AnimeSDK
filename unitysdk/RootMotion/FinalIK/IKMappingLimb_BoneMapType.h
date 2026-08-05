#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMappingLimb_BoneMapType_TypeDefinitionIndex = 38805;

	enum class IKMappingLimb_BoneMapType : ::System::Int32
	{
		Bone2 = 2,
		Bone3 = 3,
		Bone1 = 1,
		Parent = 0,
	};
}
