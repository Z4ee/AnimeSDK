#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_State_TypeDefinitionIndex = 47059;

	enum class SummerEventDroneSubsystem_State : ::System::Int32
	{
		Finish = 2,
		Pending = 0,
		Running = 1,
		Idle = 3,
	};
}
