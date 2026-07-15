#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrayType_TypeDefinitionIndex = 12993;

	enum class GridFightPrayType : ::System::Int32
	{
		None = 0,
		FateWhite = 1,
		FateBlack = 2,
	};
}
