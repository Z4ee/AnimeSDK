#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCAnimatorRuntimeInstanceDataFlag_TypeDefinitionIndex = 89393;

	enum class ENPCAnimatorRuntimeInstanceDataFlag : ::System::Byte
	{
		Looping = 0x1,
		IsStarted = 0x2,
		None = 0x0,
		DrivenByStateMachine = 0x4,
	};
}
