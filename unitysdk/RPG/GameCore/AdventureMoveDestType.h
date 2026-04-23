#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMoveDestType_TypeDefinitionIndex = 52579;

	enum class AdventureMoveDestType : ::System::Int32
	{
		Entity = 0,
		EntityIgnoreRadius = 1,
		Forward = 2,
		Position = 3,
		Resoved = 4,
	};
}
