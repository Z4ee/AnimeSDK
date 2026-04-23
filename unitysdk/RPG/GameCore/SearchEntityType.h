#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SearchEntityType_TypeDefinitionIndex = 22870;

	enum class SearchEntityType : ::System::Int32
	{
		Award = 0,
		NPCMonster = 1,
	};
}
