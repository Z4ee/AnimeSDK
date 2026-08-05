#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ComicImgPart_TypeDefinitionIndex = 32761;

	enum class ComicImgPart : ::System::Int32
	{
		None = -1,
		Top = 0,
		Bottom = 1,
		Left = 2,
		Right = 3,
		Center = 4,
	};
}
