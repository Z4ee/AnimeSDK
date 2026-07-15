#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TableLRUCache_2_LRUEntity_2_TypeDefinitionIndex = 10504;

	template <typename TKey, typename TValue, typename TTKey, typename TTValue>
	class TableLRUCache_2_LRUEntity_2 : public ::System::Object
	{
	public:
		TTKey _LRUKey_k__BackingField; // 0x0
		TTValue _LRUValue_k__BackingField; // 0x0
	};
}
