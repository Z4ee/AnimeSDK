#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HashTableKeyType_TypeDefinitionIndex = 10382;

	enum class HashTableKeyType : ::System::Byte
	{
		None = 0x0,
		Int32 = 0x1,
		UInt32 = 0x2,
		String = 0x3,
	};
}
