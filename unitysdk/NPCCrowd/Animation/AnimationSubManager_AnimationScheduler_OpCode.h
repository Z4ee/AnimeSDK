#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OpCode_TypeDefinitionIndex = 70437;

	enum class AnimationSubManager_AnimationScheduler_OpCode : ::System::Byte
	{
		Dispatch = 0x1,
		Complete = 0x2,
		Process = 0x0,
	};
}
