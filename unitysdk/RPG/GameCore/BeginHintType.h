#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BeginHintType_TypeDefinitionIndex = 10221;

	enum class BeginHintType : ::System::Int32
	{
		None = 0,
		New = 1,
		Update = 2,
	};
}
