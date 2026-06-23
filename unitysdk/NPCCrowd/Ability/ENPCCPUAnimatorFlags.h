#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorFlags_TypeDefinitionIndex = 44998;

	enum class ENPCCPUAnimatorFlags : ::System::Byte
	{
		IsTurning = 0x8,
		None = 0x0,
		HasAnimation = 0x2,
		IsMoving = 0x4,
		ControllerMask = 0x1,
	};
}
