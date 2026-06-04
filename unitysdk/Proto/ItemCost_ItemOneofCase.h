#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int ItemCost_ItemOneofCase_TypeDefinitionIndex = 26143;

	enum class ItemCost_ItemOneofCase : ::System::Int32
	{
		None = 0,
		PileItem = 4,
		EquipmentUniqueId = 5,
		RelicUniqueId = 7,
	};
}
