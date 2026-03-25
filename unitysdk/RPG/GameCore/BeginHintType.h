#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BeginHintType_TypeDefinitionIndex = 12931;

	enum class BeginHintType : ::System::Int32
	{
		None = 0,
		New = 1,
		Update = 2,
	};
}
