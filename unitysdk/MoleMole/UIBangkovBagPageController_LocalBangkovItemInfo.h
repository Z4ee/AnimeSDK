#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C3F0E3B5AB5977AE_3;

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_LocalBangkovItemInfo_TypeDefinitionIndex = 59525;

	struct alignas(8) UIBangkovBagPageController_LocalBangkovItemInfo
	{
		::System::Int32 ItemId; // 0x10
		::System::Int32 ItemNum; // 0x14
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Direction; // 0x18
		::Class_3_C3F0E3B5AB5977AE_3* KovBagIndex; // 0x20
	};
}
