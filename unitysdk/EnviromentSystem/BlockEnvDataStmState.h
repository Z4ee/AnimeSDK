#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int BlockEnvDataStmState_TypeDefinitionIndex = 47712;

	enum class BlockEnvDataStmState : ::System::Int32
	{
		Released = 0,
		Loading = 1,
		Ready = 2,
	};
}
