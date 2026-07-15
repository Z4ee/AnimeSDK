#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PS5ActivityChangeAbilityMode_TypeDefinitionIndex = 8068;

	enum class PS5ActivityChangeAbilityMode : ::System::Int32
	{
		Delta = 0,
		Full = 1,
	};
}
