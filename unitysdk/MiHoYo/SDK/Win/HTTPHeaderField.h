#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int HTTPHeaderField_TypeDefinitionIndex = 9075;

	enum class HTTPHeaderField : ::System::Int32
	{
		AccessControlAllowOrigin = 0,
		CacheControl = 1,
		Connection = 2,
		ContentLength = 3,
		Date = 4,
	};
}
