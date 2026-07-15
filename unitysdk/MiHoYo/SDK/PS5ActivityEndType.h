#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PS5ActivityEndType_TypeDefinitionIndex = 8067;

	enum class PS5ActivityEndType : ::System::Int32
	{
		Completed = 1,
		Failed = 2,
		Abandoned = 3,
	};
}
