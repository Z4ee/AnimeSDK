#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PedestrianNode_TypeDefinitionIndex = 16496;

	enum class PedestrianNode : ::System::Int32
	{
		Normal = 0,
		LineUp = 1,
	};
}
