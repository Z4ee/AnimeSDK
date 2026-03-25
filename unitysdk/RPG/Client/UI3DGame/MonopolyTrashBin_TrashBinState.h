#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyTrashBin_TrashBinState_TypeDefinitionIndex = 61848;

	enum class MonopolyTrashBin_TrashBinState : ::System::Int32
	{
		Default = 0,
		WaitTriggerEffect = 1,
		Triggered = 2,
	};
}
