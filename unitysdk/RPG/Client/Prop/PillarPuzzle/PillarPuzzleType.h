#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop::PillarPuzzle
{
	inline static constexpr unsigned int PillarPuzzleType_TypeDefinitionIndex = 78493;

	enum class PillarPuzzleType : ::System::Int32
	{
		AllHit = 0,
		SequenceHit = 1,
		SequenceInteract = 2,
		ReverseNeighbour = 3,
		SequenceInteractDisturb = 4,
	};
}
