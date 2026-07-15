#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCommunicateType_TypeDefinitionIndex = 10892;

	enum class DiceCombatCommunicateType : ::System::Int32
	{
		None = 0,
		Emoji = 1,
		Chat = 2,
	};
}
