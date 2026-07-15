#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapMoveType_TypeDefinitionIndex = 15594;

	enum class MonopolyMapMoveType : ::System::Int32
	{
		Unknown = 0,
		Jump = 1,
		Fly1 = 2,
		Fly2 = 3,
		Walk = 4,
		Teleport = 5,
		Fly3 = 6,
	};
}
