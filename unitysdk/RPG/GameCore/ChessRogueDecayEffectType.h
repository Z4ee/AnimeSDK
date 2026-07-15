#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueDecayEffectType_TypeDefinitionIndex = 14174;

	enum class ChessRogueDecayEffectType : ::System::Int32
	{
		AddMazeBuff = 0,
		AddMazeBuffList = 1,
		RemoveMazeBuffList = 2,
	};
}
