#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 49630;

	enum class ParameterType : ::System::Byte
	{
		Float = 0x1,
		Int = 0x2,
		Bool = 0x3,
	};
}
