#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameLoopMode_TypeDefinitionIndex = 72187;

	enum class MontageSeqFrameLoopMode : ::System::Byte
	{
		Loop = 0x0,
		Once = 0x1,
	};
}
