#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_State_TypeDefinitionIndex = 62709;

	enum class SummerEventDroneSubsystem_State : ::System::Int32
	{
		Finish = 2,
		Running = 1,
		Idle = 3,
		Pending = 0,
	};
}
