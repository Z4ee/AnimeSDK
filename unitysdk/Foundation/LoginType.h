#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginType_TypeDefinitionIndex = 8363;

	enum class LoginType : ::System::Int32
	{
		Debug = 0,
		SDK = 1,
		CloudPre = 2,
	};
}
