#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue_DynamicValueType_TypeDefinitionIndex = 10483;

	enum class DynamicValue_DynamicValueType : ::System::Byte
	{
		INT = 0x0,
		FLOAT = 0x1,
		BOOL = 0x2,
		ARRAY = 0x3,
		MAP = 0x4,
		STRING = 0x5,
		NULL = 0x6,
	};
}
