#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMappingLimb_BoneMapType_TypeDefinitionIndex = 36605;

	enum class IKMappingLimb_BoneMapType : ::System::Int32
	{
		Parent = 0,
		Bone1 = 1,
		Bone2 = 2,
		Bone3 = 3,
	};
}
