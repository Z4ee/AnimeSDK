#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickFunctionFlags_TypeDefinitionIndex = 8807;

	enum class ETickFunctionFlags : ::System::Byte
	{
		ImmediateTick = 0x8,
		Default = 0x3,
		PartialTick = 0x2,
		MergeTick = 0x1,
		VirtualTick = 0x4,
		None = 0x0,
	};
}
