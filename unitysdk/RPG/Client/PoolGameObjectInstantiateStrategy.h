#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PoolGameObjectInstantiateStrategy_TypeDefinitionIndex = 59381;

	enum class PoolGameObjectInstantiateStrategy : ::System::Int32
	{
		FromAsset = 0,
		BinaryPrefab = 1,
	};
}
