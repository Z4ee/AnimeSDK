#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationInertializationConfig_Allocation_TypeDefinitionIndex = 56633;

	enum class AnimationInertializationConfig_Allocation : ::System::Int32
	{
		SnapshotsBones = 0,
		Request = 3,
		SnapshotsPoses = 1,
		BonesDiff = 2,
		Count = 4,
	};
}
