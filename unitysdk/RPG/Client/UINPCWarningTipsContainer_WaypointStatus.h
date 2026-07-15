#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UINPCWarningTipsContainer_WaypointStatus_TypeDefinitionIndex = 66032;

	enum class UINPCWarningTipsContainer_WaypointStatus : ::System::Int32
	{
		None = 0,
		Safe = 1,
		Guarding = 2,
		Danger = 3,
		Attacking = 4,
	};
}
