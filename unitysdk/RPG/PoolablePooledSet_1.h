#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledSet_1.h"

namespace RPG
{
	inline static constexpr unsigned int PoolablePooledSet_1_TypeDefinitionIndex = 5641;

	template <typename T>
	class PoolablePooledSet_1 : public ::Collections::Pooled::PooledSet_1<T>
	{
	public:
	};
}
