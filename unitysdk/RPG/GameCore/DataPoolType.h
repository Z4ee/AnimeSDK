#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DataPoolType_TypeDefinitionIndex = 10722;

	enum class DataPoolType : ::System::Byte
	{
		SingleObject = 0x0,
		List = 0x1,
		HashTable = 0x2,
	};
}
