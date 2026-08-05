#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ETimeEventGroupMethod_TypeDefinitionIndex = 10123;

	enum class ETimeEventGroupMethod : ::System::Int16
	{
		RandomEvent = 0,
		AllOfEvent = 1,
	};
}
