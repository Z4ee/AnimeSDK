#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCustomScreenTransferReason_TypeDefinitionIndex = 40750;

	enum class FiveDimCustomScreenTransferReason : ::System::UInt32
	{
		None = 0x0,
		Default = 0x1,
		TeleportOrLeave = 0x2,
		PortalTeleport = 0x4,
	};
}
