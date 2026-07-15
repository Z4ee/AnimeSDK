#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureAppearMode_TypeDefinitionIndex = 54444;

	enum class EAdventureAppearMode : ::System::Int32
	{
		FadeIn = 0,
		PlayAppear = 1,
	};
}
