#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoaderNodeStatus_TypeDefinitionIndex = 7728;

	enum class LoaderNodeStatus : ::System::Int32
	{
		Loaded = 1,
		Pending = 0,
		Complete = 2,
		Failed = 3,
	};
}
