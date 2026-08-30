#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesDirection_TypeDefinitionIndex = 18215;

	enum class ChenLingFesDirection : ::System::Int32
	{
		None = 0,
		Forward = 1,
		Right = 2,
		Back = 3,
		Left = 4,
	};
}
