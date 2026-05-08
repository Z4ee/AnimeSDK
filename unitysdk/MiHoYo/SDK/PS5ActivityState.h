#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PS5ActivityState_TypeDefinitionIndex = 18979;

	enum class PS5ActivityState : ::System::Int32
	{
		NotStarted = 0,
		Complete = 1,
		Active = 2,
	};
}
