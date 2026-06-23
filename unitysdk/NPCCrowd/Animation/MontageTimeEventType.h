#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTimeEventType_TypeDefinitionIndex = 73853;

	enum class MontageTimeEventType : ::System::Byte
	{
		Enter = 0x1,
		Tick = 0x0,
		Length = 0x3,
		Exit = 0x2,
	};
}
