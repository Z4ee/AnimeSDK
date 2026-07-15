#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCharacterVOType_TypeDefinitionIndex = 17481;

	enum class AbilityCharacterVOType : ::System::Int32
	{
		Unknow = 0,
		ReceiveHealing = 5,
		ReceiveBuff = 6,
	};
}
