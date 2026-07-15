#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonopolyMoveType_TypeDefinitionIndex = 40382;

	enum class MonopolyMoveType : ::System::Int32
	{
		Unknown = 0,
		Walk = 1,
		Jump = 2,
		Teleport = 3,
	};
}
