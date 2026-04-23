#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkState_TypeDefinitionIndex = 37993;

	enum class ChimeraWorkState : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Finished = 2,
	};
}
