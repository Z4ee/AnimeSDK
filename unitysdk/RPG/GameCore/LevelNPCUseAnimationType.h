#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCUseAnimationType_TypeDefinitionIndex = 16299;

	enum class LevelNPCUseAnimationType : ::System::Int32
	{
		IdleState = 0,
		FreeStyle = 1,
		FreeStyleGraph = 2,
	};
}
