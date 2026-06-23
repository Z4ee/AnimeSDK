#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameTargetType_TypeDefinitionIndex = 70433;

	enum class MontageSeqFrameTargetType : ::System::Byte
	{
		None = 0x0,
		Part = 0x1,
		Accessory = 0x2,
	};
}
