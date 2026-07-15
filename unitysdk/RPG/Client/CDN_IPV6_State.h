#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CDN_IPV6_State_TypeDefinitionIndex = 56947;

	enum class CDN_IPV6_State : ::System::Int32
	{
		IGNORE_DNS = 0,
		IPV6_ENABLE = 1,
		IPV6_DISABLE = 2,
	};
}
