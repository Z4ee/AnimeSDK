#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StageItemInfo_TypeDefinitionIndex = 46614;

	struct alignas(8) StageItemInfo
	{
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
	};
}
