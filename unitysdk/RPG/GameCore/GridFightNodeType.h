#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightNodeType_TypeDefinitionIndex = 10207;

	enum class GridFightNodeType : ::System::Int32
	{
		GridFightNodeNone = 0,
		Monster = 1,
		CampMonster = 2,
		EliteBranch = 3,
		Boss = 4,
		Supply = 5,
	};
}
