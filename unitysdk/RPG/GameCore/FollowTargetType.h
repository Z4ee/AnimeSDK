#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowTargetType_TypeDefinitionIndex = 23611;

	enum class FollowTargetType : ::System::Int32
	{
		LocalPlayer = 0,
		SummonUnitOwner = 1,
		Custom = 2,
	};
}
