#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ContainerTypeTraits_ICollectionType_TypeDefinitionIndex = 8209;

	enum class ContainerTypeTraits_ICollectionType : ::System::Int32
	{
		Queue = 2,
		ConcurrentQueue = 3,
		Stack = 1,
	};
}
