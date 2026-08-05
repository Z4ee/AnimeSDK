#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardPathLink_TypeDefinitionIndex = 53298;

	enum class ChessboardPathLink : ::System::Int32
	{
		TL = 3,
		B = 14,
		TB = 2,
		Empty = 15,
		R = 12,
		BL = 5,
		LR = 1,
		RTB = 10,
		TR = 4,
		TLR = 7,
		TBLR = 0,
		BLR = 8,
		L = 11,
		T = 13,
		BR = 6,
		LTB = 9,
	};
}
