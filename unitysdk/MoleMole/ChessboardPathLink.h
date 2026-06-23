#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardPathLink_TypeDefinitionIndex = 50672;

	enum class ChessboardPathLink : ::System::Int32
	{
		B = 14,
		BL = 5,
		LTB = 9,
		TLR = 7,
		Empty = 15,
		T = 13,
		TR = 4,
		TL = 3,
		RTB = 10,
		TB = 2,
		BLR = 8,
		R = 12,
		L = 11,
		LR = 1,
		BR = 6,
		TBLR = 0,
	};
}
