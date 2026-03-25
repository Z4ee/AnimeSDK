#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateFlowType_TypeDefinitionIndex = 6577;

	enum class AgeGateFlowType : ::System::Int32
	{
		NONE = 0,
		REGISTER = 1,
		LOGIN = 2,
		PAYMENT = 3,
	};
}
