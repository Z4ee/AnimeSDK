#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 8442;

	enum class ParameterType : ::System::Byte
	{
		Trigger = 0x9,
		Bool = 0x4,
		Int = 0x3,
		None = 0x0,
		Max = 0xA,
		Float = 0x1,
	};
}
