#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleTutorialType_TypeDefinitionIndex = 10146;

	enum class PuzzleTutorialType : ::System::Int32
	{
		PadsPuzzle = 1,
		PillarPuzzleAll = 2,
		PillarPuzzleSequence = 3,
		PillarPuzzleReverse = 4,
		CablePuzzleStart = 5,
		PillarPuzzleSequenceInteract = 6,
		InsertionPuzzleTransfer = 7,
		InsertionPuzzleBlock = 8,
		BlockProjectionPuzzleSelect = 9,
	};
}
