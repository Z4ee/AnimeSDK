#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureSpawnMode_TypeDefinitionIndex = 53331;

	enum class EAdventureSpawnMode : ::System::Int32
	{
		FadeIn = 0,
		PlayAppear = 1,
	};
}
