#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerWorldLevelUpgradeData_TypeDefinitionIndex = 63725;

	struct alignas(4) PlayerWorldLevelUpgradeData
	{
		::System::UInt32 Level; // 0x10
		::System::UInt32 WorldLevel; // 0x14
	};
}
