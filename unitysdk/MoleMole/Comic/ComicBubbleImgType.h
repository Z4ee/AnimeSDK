#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ComicBubbleImgType_TypeDefinitionIndex = 32778;

	enum class ComicBubbleImgType : ::System::Int32
	{
		RoundRectangle = 0,
		Think = 1,
		Shout = 2,
	};
}
