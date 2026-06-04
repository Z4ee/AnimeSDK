#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop::ChimePuzzle
{
	inline static constexpr unsigned int LogicChimeType_TypeDefinitionIndex = 73499;

	enum class LogicChimeType : ::System::Int32
	{
		Small = 0,
		Big = 1,
		BigNeighbour = 2,
	};
}
