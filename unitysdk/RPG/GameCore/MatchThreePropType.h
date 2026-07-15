#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePropType_TypeDefinitionIndex = 10044;

	enum class MatchThreePropType : ::System::Int32
	{
		Invalid = 0,
		DetonateBombs = 1,
		DetonateBombsRecursively = 2,
		BreakPiece = 3,
		BreakFruitPiece = 4,
		BreakCrossShape = 5,
		ForceShuffle = 6,
		ForceShuffleAggregateBomb = 7,
		ForceSwap = 8,
		SelectPieceToSquareBomb = 9,
		RandomPieceToMultiStyleBomb = 10,
		RandomTwoPieceToMultiStyleBomb = 11,
		SelectPieceToStepBonus = 12,
		RandomBreakStyle = 13,
		SelectBreakStyle = 14,
		CopySelectPiece = 15,
		CopySelectColumn = 16,
	};
}
