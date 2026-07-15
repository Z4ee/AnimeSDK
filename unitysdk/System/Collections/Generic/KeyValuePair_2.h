#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyValuePair_2_TypeDefinitionIndex = 1523;

	template <typename TKey, typename TValue>
	struct KeyValuePair_2
	{
		TKey key; // 0x0
		TValue value; // 0x0
	};
}
