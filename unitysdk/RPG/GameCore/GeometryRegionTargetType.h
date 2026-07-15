#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GeometryRegionTargetType_TypeDefinitionIndex = 10164;

	enum class GeometryRegionTargetType : ::System::Int32
	{
		LocalPlayer = 1,
		FakeAvatarLocalPlayer = 2,
		TeamMemberLocalPlayer = 3,
		SingleNpc = 4,
	};
}
