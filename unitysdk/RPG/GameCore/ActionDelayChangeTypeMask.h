#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayChangeTypeMask_TypeDefinitionIndex = 23868;

	enum class ActionDelayChangeTypeMask : ::System::UInt16
	{
		None = 0x0,
		Bit_Increase = 0x1,
		Bit_Decrease = 0x2,
		All = 0xFFFF,
	};
}
