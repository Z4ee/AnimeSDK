#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResultItemType_TypeDefinitionIndex = 70131;

	enum class IdleLiveGachaResultItemType : ::System::Int32
	{
		Avatar = 0,
		Gem = 1,
	};
}
