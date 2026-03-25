#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClientPunkLordShareType_TypeDefinitionIndex = 54309;

	enum class ClientPunkLordShareType : ::System::Int32
	{
		None = 0,
		Friend = 1,
		All = 2,
	};
}
