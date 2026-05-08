#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas
{
	inline static constexpr unsigned int Port_BindStatus_TypeDefinitionIndex = 27222;

	enum class Port_BindStatus : ::System::Int32
	{
		Missing = 1,
		InvalidCast = 2,
		Valid = 0,
	};
}
