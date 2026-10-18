#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager__PauseResolve_TypeDefinitionIndex = 73078;

	enum class UIManager__PauseResolve : ::System::Int32
	{
		Defer = 0,
		Resume = 1,
		Pause = 2,
	};
}
