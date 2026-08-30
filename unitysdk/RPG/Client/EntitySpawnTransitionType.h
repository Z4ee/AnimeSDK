#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EntitySpawnTransitionType_TypeDefinitionIndex = 62290;

	enum class EntitySpawnTransitionType : ::System::Int32
	{
		None = 0,
		FadeInOut = 1,
		BlackInOut = 2,
	};
}
