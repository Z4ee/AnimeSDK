#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int ProfileCounterType_TypeDefinitionIndex = 33729;

	enum class ProfileCounterType : ::System::Int32
	{
		Unkown = 0,
		GameEntity = 1,
		TickedEntity = 2,
		TickComponent = 3,
		LateUpdateComponent = 4,
		TickEntityLOD0 = 5,
		TickEntityLOD1 = 6,
		TickEntityLOD2 = 7,
		TickEntityLOD3 = 8,
		TickEntityLOD4 = 9,
		EntityTypeBegin = 10,
		EntityTypeEnd = 20,
	};
}
