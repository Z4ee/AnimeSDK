#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconOrientationType_TypeDefinitionIndex = 11937;

	enum class MiniMapIconOrientationType : ::System::Int32
	{
		Static = 0,
		Transform = 1,
		Head = 2,
	};
}
