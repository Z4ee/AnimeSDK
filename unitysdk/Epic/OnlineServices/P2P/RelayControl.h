#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int RelayControl_TypeDefinitionIndex = 43414;

	enum class RelayControl : ::System::Int32
	{
		NoRelays = 0,
		AllowRelays = 1,
		ForceRelays = 2,
	};
}
