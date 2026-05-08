#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoaderNodeStatus_TypeDefinitionIndex = 8295;

	enum class LoaderNodeStatus : ::System::Int32
	{
		Loaded = 1,
		Complete = 2,
		Failed = 3,
		Pending = 0,
	};
}
