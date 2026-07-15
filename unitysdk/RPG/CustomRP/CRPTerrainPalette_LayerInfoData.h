#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainPalette_LayerInfoData_TypeDefinitionIndex = 36182;

	struct alignas(4) CRPTerrainPalette_LayerInfoData
	{
		::System::UInt32 scaleOffset; // 0x10
		::System::UInt32 normalMetallicSmoothness; // 0x14
	};
}
