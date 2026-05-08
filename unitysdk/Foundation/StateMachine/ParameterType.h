#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 8821;

	enum class ParameterType : ::System::Byte
	{
		Max = 0xA,
		Int = 0x3,
		Float = 0x1,
		None = 0x0,
		Trigger = 0x9,
		Bool = 0x4,
	};
}
