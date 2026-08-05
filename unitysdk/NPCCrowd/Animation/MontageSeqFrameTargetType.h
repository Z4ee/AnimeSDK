#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageSeqFrameTargetType_TypeDefinitionIndex = 85310;

	enum class MontageSeqFrameTargetType : ::System::Byte
	{
		None = 0x0,
		Accessory = 0x2,
		Part = 0x1,
	};
}
