#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardPathLink_TypeDefinitionIndex = 53859;

	enum class ChessboardPathLink : ::System::Int32
	{
		TL = 3,
		LTB = 9,
		RTB = 10,
		TBLR = 0,
		BL = 5,
		TB = 2,
		R = 12,
		T = 13,
		L = 11,
		BLR = 8,
		TR = 4,
		TLR = 7,
		LR = 1,
		BR = 6,
		Empty = 15,
		B = 14,
	};
}
