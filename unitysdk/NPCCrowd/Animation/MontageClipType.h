#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageClipType_TypeDefinitionIndex = 80468;

	enum class MontageClipType : ::System::Byte
	{
		Animation = 0x0,
		SequenceKey = 0x1,
	};
}
