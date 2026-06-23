#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_EntityCreate_TypeDefinitionIndex = 66600;

	struct alignas(8) ConfigViewObjectMisc_EntityCreate
	{
		::System::Boolean isOpen; // 0x10
		::System::Boolean isDelayCreateEntityEnabled; // 0x11
		::System::Boolean isEntityGridDisabled; // 0x12
		::System::Single gridSize; // 0x14
		::System::Single createInterval; // 0x18
		::System::Single createIntervalForNpc; // 0x1C
		::System::Boolean filterFloorIDForNpcSpecficCreateInterval; // 0x20
		::Il2CppArray<::System::Int32>* floorIDForNpcSpecficCreateInterval; // 0x28
	};
}
