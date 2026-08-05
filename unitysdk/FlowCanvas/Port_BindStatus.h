#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas
{
	inline static constexpr unsigned int Port_BindStatus_TypeDefinitionIndex = 30048;

	enum class Port_BindStatus : ::System::Int32
	{
		InvalidCast = 2,
		Missing = 1,
		Valid = 0,
	};
}
