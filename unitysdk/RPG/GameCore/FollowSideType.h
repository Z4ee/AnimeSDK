#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowSideType_TypeDefinitionIndex = 15007;

	enum class FollowSideType : ::System::Int32
	{
		None = 0,
		Left = 1,
		Right = 2,
	};
}
