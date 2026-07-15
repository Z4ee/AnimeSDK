#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateReijuType_TypeDefinitionIndex = 11124;

	enum class FateReijuType : ::System::Int32
	{
		None = 0,
		BondIncrease = 1,
		PieceIncrease = 2,
		Economy = 3,
		BoundEnhance = 4,
		PieceEnhance = 5,
		ShopBuff = 6,
		Speical = 7,
	};
}
