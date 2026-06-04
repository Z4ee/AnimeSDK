#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEffect_TypeDefinitionIndex = 11988;

	enum class MapEffect : ::System::Int32
	{
		Unknown = 0,
		Path = 1,
		Region = 2,
		Cross = 3,
	};
}
