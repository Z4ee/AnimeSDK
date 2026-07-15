#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_DeadLineState_TypeDefinitionIndex = 53535;

	enum class EvolveBuildGearManager_DeadLineState : ::System::Byte
	{
		Undefined = 0x0,
		Warning = 0x1,
		Safe = 0x2,
	};
}
