#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int DynamicCollisionRegisterReason_TypeDefinitionIndex = 40673;

	enum class DynamicCollisionRegisterReason : ::System::Byte
	{
		None = 0x0,
		PlayerContact = 0x1,
		EventAction = 0x2,
		CollideSystemGuard = 0x4,
	};
}
