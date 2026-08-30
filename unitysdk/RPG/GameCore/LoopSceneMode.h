#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopSceneMode_TypeDefinitionIndex = 18082;

	enum class LoopSceneMode : ::System::Int32
	{
		MoveCamera = 0,
		MoveScene = 1,
	};
}
