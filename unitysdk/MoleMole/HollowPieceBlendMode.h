#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowPieceBlendMode_TypeDefinitionIndex = 88835;

	enum class HollowPieceBlendMode : ::System::Int32
	{
		Multiply = 2,
		Add = 1,
		None = -1,
		AlphaBlend = 0,
		Overlay = 3,
	};
}
