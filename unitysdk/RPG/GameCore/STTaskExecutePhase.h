#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int STTaskExecutePhase_TypeDefinitionIndex = 23755;

	enum class STTaskExecutePhase : ::System::Int32
	{
		Enter = 0,
		Exit = 1,
	};
}
