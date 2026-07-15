#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamPlaceType_TypeDefinitionIndex = 13776;

	enum class PamPlaceType : ::System::Int32
	{
		None = 0,
		Ground = 1,
		Window = 2,
		Jukebox = 3,
		Plant = 4,
		Vending = 5,
	};
}
