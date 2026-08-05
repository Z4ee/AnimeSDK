#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameLoopMode_TypeDefinitionIndex = 68989;

	enum class MontageSeqFrameLoopMode : ::System::Byte
	{
		Once = 0x1,
		Loop = 0x0,
	};
}
