#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorFlags_TypeDefinitionIndex = 55910;

	enum class ENPCCPUAnimatorFlags : ::System::Byte
	{
		None = 0x0,
		IsMoving = 0x4,
		IsTurning = 0x8,
		ControllerMask = 0x1,
		HasAnimation = 0x2,
	};
}
