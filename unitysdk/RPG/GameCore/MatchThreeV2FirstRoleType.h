#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2FirstRoleType_TypeDefinitionIndex = 11519;

	enum class MatchThreeV2FirstRoleType : ::System::Int32
	{
		Self = 0,
		Enemy = 1,
		Random = 2,
	};
}
