#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FootLockStatus.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int PhaseMatchingTarget_TypeDefinitionIndex = 47199;

	struct alignas(4) PhaseMatchingTarget
	{
		::System::Single Area; // 0x10
		::System::Single AreaDerivative; // 0x14
		::NPCCrowd::Animation::FootLockStatus LockStatus; // 0x18
	};
}
