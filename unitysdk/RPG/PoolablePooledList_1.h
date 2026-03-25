#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledList_1.h"

namespace RPG
{
	inline static constexpr unsigned int PoolablePooledList_1_TypeDefinitionIndex = 6400;

	template <typename T>
	class PoolablePooledList_1 : public ::Collections::Pooled::PooledList_1<T>
	{
	public:
	};
}
