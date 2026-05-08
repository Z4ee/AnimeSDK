#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowPieceBlendMode_TypeDefinitionIndex = 59845;

	enum class HollowPieceBlendMode : ::System::Int32
	{
		Overlay = 3,
		Add = 1,
		None = -1,
		Multiply = 2,
		AlphaBlend = 0,
	};
}
