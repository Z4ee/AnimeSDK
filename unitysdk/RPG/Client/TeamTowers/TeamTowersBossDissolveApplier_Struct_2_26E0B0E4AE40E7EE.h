#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FDRIDissolveOperation;
class FiveDimRenderingItem;

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossDissolveApplier_Struct_2_26E0B0E4AE40E7EE_TypeDefinitionIndex = 75162;

	struct alignas(8) TeamTowersBossDissolveApplier_Struct_2_26E0B0E4AE40E7EE
	{
		::FiveDimRenderingItem* Field_2_0; // 0x10
		::FDRIDissolveOperation* Field_2_1; // 0x18
	};
}
