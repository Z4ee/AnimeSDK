#pragma once
#include "unitysdk/unitysdk.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_InsertionBehavior_TypeDefinitionIndex = 5083;

	enum class PooledDictionary_2_InsertionBehavior : ::System::Byte
	{
		None = 0x0,
		OverwriteExisting = 0x1,
		ThrowOnExisting = 0x2,
	};
}
