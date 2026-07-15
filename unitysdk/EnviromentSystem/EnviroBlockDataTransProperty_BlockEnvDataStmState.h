#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBlockDataTransProperty_BlockEnvDataStmState_TypeDefinitionIndex = 47737;

	enum class EnviroBlockDataTransProperty_BlockEnvDataStmState : ::System::Int32
	{
		Released = 0,
		Loading = 1,
		Ready = 2,
	};
}
