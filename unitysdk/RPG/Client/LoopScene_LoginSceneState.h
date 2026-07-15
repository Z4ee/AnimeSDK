#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoopScene_LoginSceneState_TypeDefinitionIndex = 65795;

	enum class LoopScene_LoginSceneState : ::System::Int32
	{
		None = 0,
		TryToStop = 1,
		Move = 2,
	};
}
