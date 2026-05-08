#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FootLockStatus_TypeDefinitionIndex = 44891;

	enum class FootLockStatus : ::System::Int32
	{
		Both = 3,
		RightToLeft = 5,
		RightFoot = 2,
		None = 0,
		LeftToRight = 4,
		LeftFoot = 1,
	};
}
