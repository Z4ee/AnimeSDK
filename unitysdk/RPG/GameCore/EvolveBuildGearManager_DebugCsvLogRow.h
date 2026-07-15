#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_DebugCsvLogRow_TypeDefinitionIndex = 53533;

	struct alignas(4) EvolveBuildGearManager_DebugCsvLogRow
	{
		::System::UInt32 UIntParam1; // 0x10
		::System::UInt32 UIntParam2; // 0x14
		::System::UInt32 UIntParam3; // 0x18
	};
}
