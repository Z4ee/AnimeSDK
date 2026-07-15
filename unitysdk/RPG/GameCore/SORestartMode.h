#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SORestartMode_TypeDefinitionIndex = 16670;

	enum class SORestartMode : ::System::Int32
	{
		RestartFromSO = 0,
		RestartFromPoint = 1,
		RestartFromTask = 2,
	};
}
