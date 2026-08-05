#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 8641;

	enum class ParameterType : ::System::Byte
	{
		Int = 0x3,
		Float = 0x1,
		None = 0x0,
		Max = 0xA,
		Trigger = 0x9,
		Bool = 0x4,
	};
}
