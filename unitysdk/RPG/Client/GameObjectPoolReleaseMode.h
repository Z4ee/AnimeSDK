#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectPoolReleaseMode_TypeDefinitionIndex = 56750;

	enum class GameObjectPoolReleaseMode : ::System::Int32
	{
		NotRelease = 0,
		AutoRelease = 1,
		ImmediatelyRelease = 2,
	};
}
