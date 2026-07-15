#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAxis_TypeDefinitionIndex = 10135;

	enum class EAxis : ::System::Int32
	{
		Vertical = 0,
		Horizontal = 1,
	};
}
