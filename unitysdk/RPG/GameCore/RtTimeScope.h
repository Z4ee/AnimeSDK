#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTimeScope_TypeDefinitionIndex = 16927;

	enum class RtTimeScope : ::System::Int32
	{
		Realtime = 0,
		GameWorld = 1,
		Entity = 2,
	};
}
