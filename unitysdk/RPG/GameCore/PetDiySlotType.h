#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetDiySlotType_TypeDefinitionIndex = 14406;

	enum class PetDiySlotType : ::System::Int32
	{
		Default = 0,
		Patrol = 1,
		TeamFollowCurve = 2,
		RandomWander = 3,
	};
}
