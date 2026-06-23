#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas
{
	inline static constexpr unsigned int Port_BindStatus_TypeDefinitionIndex = 29791;

	enum class Port_BindStatus : ::System::Int32
	{
		Valid = 0,
		InvalidCast = 2,
		Missing = 1,
	};
}
