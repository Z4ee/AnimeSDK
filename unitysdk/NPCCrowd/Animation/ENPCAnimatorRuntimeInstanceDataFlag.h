#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCAnimatorRuntimeInstanceDataFlag_TypeDefinitionIndex = 81016;

	enum class ENPCAnimatorRuntimeInstanceDataFlag : ::System::Byte
	{
		DrivenByStateMachine = 0x4,
		IsStarted = 0x2,
		None = 0x0,
		Looping = 0x1,
	};
}
