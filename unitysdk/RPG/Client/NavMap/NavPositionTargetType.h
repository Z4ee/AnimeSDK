#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavPositionTargetType_TypeDefinitionIndex = 61303;

	enum class NavPositionTargetType : ::System::Int32
	{
		None = 0,
		Anchor = 1,
		Prop = 2,
		Npc = 3,
		District = 4,
		Entity = 5,
		All = 6,
	};
}
