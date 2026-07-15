#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PieceType_TypeDefinitionIndex = 23991;

	enum class PieceType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Bomb = 2,
		Special = 3,
	};
}
