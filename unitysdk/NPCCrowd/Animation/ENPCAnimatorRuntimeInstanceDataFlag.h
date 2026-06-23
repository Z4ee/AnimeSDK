#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCAnimatorRuntimeInstanceDataFlag_TypeDefinitionIndex = 41271;

	enum class ENPCAnimatorRuntimeInstanceDataFlag : ::System::Byte
	{
		None = 0x0,
		IsStarted = 0x2,
		DrivenByStateMachine = 0x4,
		Looping = 0x1,
	};
}
