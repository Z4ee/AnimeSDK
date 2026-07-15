#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SceneryDistance_TypeDefinitionIndex = 16482;

	enum class SceneryDistance : ::System::Int32
	{
		Nearby = 0,
		Medium = 1,
		Distant = 2,
	};
}
