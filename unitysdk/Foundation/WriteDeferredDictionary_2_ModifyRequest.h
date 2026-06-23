#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int WriteDeferredDictionary_2_ModifyRequest_TypeDefinitionIndex = 8388;

	template <typename TKey, typename TValue>
	struct WriteDeferredDictionary_2_ModifyRequest
	{
		::System::Boolean IsAdd; // 0x0
		TKey Key; // 0x0
		TValue Value; // 0x0
	};
}
