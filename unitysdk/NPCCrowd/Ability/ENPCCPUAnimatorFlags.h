#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorFlags_TypeDefinitionIndex = 49108;

	enum class ENPCCPUAnimatorFlags : ::System::Byte
	{
		ControllerMask = 0x1,
		IsTurning = 0x8,
		None = 0x0,
		IsMoving = 0x4,
		HasAnimation = 0x2,
	};
}
