#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginType_TypeDefinitionIndex = 8020;

	enum class LoginType : ::System::Int32
	{
		SDK = 1,
		Debug = 0,
		CloudPre = 2,
	};
}
