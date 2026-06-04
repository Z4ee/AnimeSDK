#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Network
{
	inline static constexpr unsigned int SessionType_TypeDefinitionIndex = 40490;

	enum class SessionType : ::System::Int32
	{
		Tcp = 0,
		Kcp = 1,
	};
}
