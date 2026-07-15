#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MappingInfoShowType_TypeDefinitionIndex = 60138;

	enum class MappingInfoShowType : ::System::Int32
	{
		Prop = 0,
		Npc = 1,
		Monster = 2,
		AssistWaypoint = 3,
		Chest = 4,
	};
}
