#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickFunctionFlags_TypeDefinitionIndex = 9082;

	enum class ETickFunctionFlags : ::System::Byte
	{
		MergeTick = 0x1,
		ImmediateTick = 0x8,
		PartialTick = 0x2,
		VirtualTick = 0x4,
		None = 0x0,
		Default = 0x3,
	};
}
