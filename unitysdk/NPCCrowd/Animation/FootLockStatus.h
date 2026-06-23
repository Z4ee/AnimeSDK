#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FootLockStatus_TypeDefinitionIndex = 46017;

	enum class FootLockStatus : ::System::Int32
	{
		Both = 3,
		None = 0,
		LeftFoot = 1,
		RightFoot = 2,
		LeftToRight = 4,
		RightToLeft = 5,
	};
}
