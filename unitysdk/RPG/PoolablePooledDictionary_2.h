#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledDictionary_2.h"

namespace RPG
{
	inline static constexpr unsigned int PoolablePooledDictionary_2_TypeDefinitionIndex = 5642;

	template <typename K, typename V>
	class PoolablePooledDictionary_2 : public ::Collections::Pooled::PooledDictionary_2<K, V>
	{
	public:
	};
}
