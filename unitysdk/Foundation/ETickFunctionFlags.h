#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickFunctionFlags_TypeDefinitionIndex = 8720;

	enum class ETickFunctionFlags : ::System::Byte
	{
		PartialTick = 0x2,
		Default = 0x3,
		ImmediateTick = 0x8,
		MergeTick = 0x1,
		VirtualTick = 0x4,
		None = 0x0,
	};
}
