#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	inline static constexpr unsigned int rdtTcpMessageComponents_Property_Type_TypeDefinitionIndex = 45203;

	enum class rdtTcpMessageComponents_Property_Type : ::System::Int32
	{
		Field = 0,
		Property = 1,
		Method = 2,
	};
}
