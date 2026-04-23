#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponentType_TypeDefinitionIndex = 68209;

	enum class AlleyPackComponentType : ::System::Int32
	{
		None = 0,
		Ship = 1,
		Good = 2,
	};
}
