#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LRUEntity_2_TypeDefinitionIndex = 33855;

	template <typename TKey, typename TValue>
	class LRUEntity_2 : public ::System::Object
	{
	public:
		TKey _LRUKey_k__BackingField; // 0x0
		TValue _LRUValue_k__BackingField; // 0x0
	};
}
