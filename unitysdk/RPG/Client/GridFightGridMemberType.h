#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridMemberType_TypeDefinitionIndex = 61919;

	enum class GridFightGridMemberType : ::System::Int32
	{
		Role = 0,
		NPC = 1,
		Forge = 2,
		Projection = 3,
	};
}
