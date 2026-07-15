#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int RIStateSetReason_TypeDefinitionIndex = 40712;

	enum class RIStateSetReason : ::System::Int32
	{
		Default = 0,
		SwitchPlatform = 2,
		DestructibleProp = 4,
		Action = 8,
		Money = 16,
		Conveyor = 32,
	};
}
