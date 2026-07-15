#pragma once
#include "unitysdk/unitysdk.h"

namespace GameCore::Foundation::Collections
{
	inline static constexpr unsigned int ExceptionArgument_TypeDefinitionIndex = 6713;

	enum class ExceptionArgument : ::System::Int32
	{
		obj = 0,
		dictionary = 1,
		array = 2,
		info = 3,
		key = 4,
		collection = 5,
		match = 6,
		converter = 7,
		queue = 8,
		stack = 9,
		capacity = 10,
		index = 11,
		startIndex = 12,
		value = 13,
		count = 14,
		arrayIndex = 15,
		item = 16,
	};
}
