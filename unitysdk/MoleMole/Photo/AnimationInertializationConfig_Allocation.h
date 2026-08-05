#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationInertializationConfig_Allocation_TypeDefinitionIndex = 76960;

	enum class AnimationInertializationConfig_Allocation : ::System::Int32
	{
		Request = 3,
		SnapshotsPoses = 1,
		BonesDiff = 2,
		SnapshotsBones = 0,
		Count = 4,
	};
}
