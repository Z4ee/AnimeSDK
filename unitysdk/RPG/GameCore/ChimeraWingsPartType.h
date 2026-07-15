#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWingsPartType_TypeDefinitionIndex = 12512;

	enum class ChimeraWingsPartType : ::System::Int32
	{
		None = 0,
		ButterFly = 5,
		Demon = 6,
		Fish = 7,
		Angel = 8,
	};
}
