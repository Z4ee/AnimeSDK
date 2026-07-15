#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionState_TypeDefinitionIndex = 60514;

	enum class ChimeraDuelGameSessionState : ::System::Int32
	{
		Invalid = 0,
		Shop = 1,
		Battle = 2,
		Settle = 3,
	};
}
