#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTimeEventType_TypeDefinitionIndex = 42705;

	enum class MontageTimeEventType : ::System::Byte
	{
		Length = 0x3,
		Enter = 0x1,
		Exit = 0x2,
		Tick = 0x0,
	};
}
