#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMappingLimb_BoneMapType_TypeDefinitionIndex = 70854;

	enum class IKMappingLimb_BoneMapType : ::System::Int32
	{
		Parent = 0,
		Bone1 = 1,
		Bone2 = 2,
		Bone3 = 3,
	};
}
