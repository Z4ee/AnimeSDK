#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LayerBackgroundWhitelist_LayerBackgroundStageItem_TypeDefinitionIndex = 38982;

	struct alignas(8) LayerBackgroundWhitelist_LayerBackgroundStageItem
	{
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
	};
}
