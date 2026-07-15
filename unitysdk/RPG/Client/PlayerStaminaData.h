#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerStaminaData_TypeDefinitionIndex = 63724;

	struct alignas(8) PlayerStaminaData
	{
		::System::UInt32 Stamina; // 0x10
		::System::UInt32 ReserveStamina; // 0x14
		::System::Int64 NextRecoverTime; // 0x18
		::System::Int64 NextReserveTime; // 0x20
	};
}
