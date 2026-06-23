#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowEntityType_TypeDefinitionIndex = 24795;

	enum class HollowEntityType : ::System::Int32
	{
		HOLLOW_ENTITY_TYPE_GRID = 3,
		HOLLOW_ENTITY_TYPE_SECTION = 7,
		HOLLOW_ENTITY_TYPE_TERRAIN = 12,
		HOLLOW_ENTITY_TYPE_SECTION_EVENT = 11,
		HOLLOW_ENTITY_TYPE_PIN = 6,
		HOLLOW_ENTITY_TYPE_BARRIER = 10,
		HOLLOW_ENTITY_TYPE_LIGHT = 5,
		HOLLOW_ENTITY_TYPE_NONE = 0,
		HOLLOW_ENTITY_TYPE_EVENT = 4,
		HOLLOW_ENTITY_TYPE_NPC = 2,
		HOLLOW_ENTITY_TYPE_GLOBAL = 9,
		HOLLOW_ENTITY_TYPE_PLAYER = 1,
	};
}
