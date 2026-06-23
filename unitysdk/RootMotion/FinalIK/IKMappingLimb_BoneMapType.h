#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKMappingLimb_BoneMapType_TypeDefinitionIndex = 38260;

	enum class IKMappingLimb_BoneMapType : ::System::Int32
	{
		Bone1 = 1,
		Bone2 = 2,
		Parent = 0,
		Bone3 = 3,
	};
}
