#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertAbilityState_TypeDefinitionIndex = 53695;

	enum class InsertAbilityState : ::System::Byte
	{
		WaitUse = 0x1,
		InsertAbilityWorking = 0x4,
		SelfDeathProcess = 0x8,
		AllFinish = 0x10,
		All = 0xFF,
	};
}
