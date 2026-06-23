#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_State_TypeDefinitionIndex = 87302;

	enum class SummerEventDroneSubsystem_State : ::System::Int32
	{
		Pending = 0,
		Idle = 3,
		Running = 1,
		Finish = 2,
	};
}
