#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard_PuzzlePhase_TypeDefinitionIndex = 73221;

	enum class OpticalIllusionPuzzleBoard_PuzzlePhase : ::System::Int32
	{
		FreeOP = 0,
		PathEffect = 1,
		NPCMove = 2,
		FinishDelay = 3,
		Finish = 4,
		Reset = 5,
		Performance = 6,
	};
}
