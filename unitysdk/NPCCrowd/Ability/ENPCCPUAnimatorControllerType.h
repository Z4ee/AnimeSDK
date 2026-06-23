#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorControllerType_TypeDefinitionIndex = 81208;

	enum class ENPCCPUAnimatorControllerType : ::System::Byte
	{
		PathFollow = 0x0,
		StateMachine = 0x1,
		Bits = 0x1,
		Mask = 0x1,
	};
}
