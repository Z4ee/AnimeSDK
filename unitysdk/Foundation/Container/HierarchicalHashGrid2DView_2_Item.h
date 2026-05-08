#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DView_2_Item_TypeDefinitionIndex = 8909;

	template <typename T, typename TEqualsFunc>
	struct HierarchicalHashGrid2DView_2_Item
	{
		T Id; // 0x0
		::System::Int64 Next; // 0x0
	};
}
