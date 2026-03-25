#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int IPVersion_TypeDefinitionIndex = 33844;

	enum class IPVersion : ::System::Int32
	{
		None = 0,
		IPv4 = 1,
		IPv6 = 2,
	};
}
