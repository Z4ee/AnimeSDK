#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSystemResult_TypeDefinitionIndex = 49882;

	enum class AdvSystemResult : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Success = 2,
		Fail = 3,
	};
}
