#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_EntityCreate_TypeDefinitionIndex = 80014;

	struct alignas(4) ConfigViewObjectMisc_EntityCreate
	{
		::System::Boolean isOpen; // 0x10
		::System::Boolean isDelayCreateEntityEnabled; // 0x11
		::System::Boolean isEntityGridDisabled; // 0x12
		::System::Single gridSize; // 0x14
		::System::Single createInterval; // 0x18
	};
}
