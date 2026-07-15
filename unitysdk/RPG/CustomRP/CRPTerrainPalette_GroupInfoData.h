#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainPalette_GroupInfoData_TypeDefinitionIndex = 36181;

	struct alignas(4) CRPTerrainPalette_GroupInfoData
	{
		::System::UInt32 layers0; // 0x10
		::System::UInt32 layers1; // 0x14
	};
}
