#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerQuantifyTagType_TypeDefinitionIndex = 12665;

	enum class DrinkMakerQuantifyTagType : ::System::Int32
	{
		None = 0,
		Sweetness = 1,
		Acidity = 2,
		Freshness = 3,
		Texture = 4,
		CheersTypeA = 100,
		CheersTypeB = 101,
		CheersTypeC = 102,
	};
}
