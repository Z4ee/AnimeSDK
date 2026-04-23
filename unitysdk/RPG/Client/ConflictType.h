#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ConflictType_TypeDefinitionIndex = 56121;

	enum class ConflictType : ::System::Int32
	{
		None = 0,
		NPC = 1,
		Region = 2,
	};
}
