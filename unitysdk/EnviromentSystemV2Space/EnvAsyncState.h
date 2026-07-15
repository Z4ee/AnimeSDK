#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvAsyncState_TypeDefinitionIndex = 47341;

	enum class EnvAsyncState : ::System::Int32
	{
		Pending = 0,
		Finished = 1,
		Failed = 2,
		Invalid = 3,
	};
}
