#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int InsertionBehavior_TypeDefinitionIndex = 1527;

	enum class InsertionBehavior : ::System::Byte
	{
		None = 0x0,
		OverwriteExisting = 0x1,
		ThrowOnExisting = 0x2,
	};
}
