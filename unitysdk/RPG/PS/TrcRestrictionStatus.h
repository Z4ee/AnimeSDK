#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::PS
{
	inline static constexpr unsigned int TrcRestrictionStatus_TypeDefinitionIndex = 51890;

	enum class TrcRestrictionStatus : ::System::Int32
	{
		Error = -1,
		Allow = 0,
		Forbid = 1,
	};
}
