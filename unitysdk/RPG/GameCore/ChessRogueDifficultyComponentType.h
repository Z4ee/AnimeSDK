#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueDifficultyComponentType_TypeDefinitionIndex = 14180;

	enum class ChessRogueDifficultyComponentType : ::System::Int32
	{
		None = 0,
		Base = 1,
		Additional = 2,
	};
}
