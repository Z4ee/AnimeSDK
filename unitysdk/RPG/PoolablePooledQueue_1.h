#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledQueue_1.h"

namespace RPG
{
	inline static constexpr unsigned int PoolablePooledQueue_1_TypeDefinitionIndex = 5638;

	template <typename T>
	class PoolablePooledQueue_1 : public ::Collections::Pooled::PooledQueue_1<T>
	{
	public:
	};
}
