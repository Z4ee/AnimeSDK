#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int RequestMethodEnum_TypeDefinitionIndex = 8426;

	enum class RequestMethodEnum : ::System::Int32
	{
		eUnknown = 0,
		eOptions = 1,
		eGet = 2,
		ePost = 3,
	};
}
