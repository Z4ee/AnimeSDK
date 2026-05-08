#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 75775;

	enum class ParameterType : ::System::Byte
	{
		Int = 0x2,
		Bool = 0x3,
		Float = 0x1,
	};
}
