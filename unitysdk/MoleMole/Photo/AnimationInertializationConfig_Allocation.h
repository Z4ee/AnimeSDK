#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationInertializationConfig_Allocation_TypeDefinitionIndex = 78744;

	enum class AnimationInertializationConfig_Allocation : ::System::Int32
	{
		BonesDiff = 2,
		SnapshotsPoses = 1,
		Count = 4,
		Request = 3,
		SnapshotsBones = 0,
	};
}
