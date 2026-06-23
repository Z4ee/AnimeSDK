#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int UpdateIntervalType_TypeDefinitionIndex = 33234;

	enum class UpdateIntervalType : ::System::Int32
	{
		EveryFrame = 0,
		SpecifySeconds = 1,
		Manual = 2,
	};
}
