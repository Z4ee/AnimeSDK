#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int RouteNodeConnectivity_TypeDefinitionIndex = 48961;

	enum class RouteNodeConnectivity : ::System::Int32
	{
		Invalid = 0,
		Terminal = 1,
		Relay = 2,
		Branch = 3,
	};
}
