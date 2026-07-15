#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRelationType_TypeDefinitionIndex = 23795;

	enum class EntityRelationType : ::System::Int32
	{
		None = 0,
		HPShare = 1,
		HPParentChild = 2,
		HPTransfer = 3,
	};
}
