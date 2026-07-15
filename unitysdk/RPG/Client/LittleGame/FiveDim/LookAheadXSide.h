#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int LookAheadXSide_TypeDefinitionIndex = 40666;

	enum class LookAheadXSide : ::System::Int32
	{
		Center = 0,
		Left = 1,
		Right = 2,
	};
}
