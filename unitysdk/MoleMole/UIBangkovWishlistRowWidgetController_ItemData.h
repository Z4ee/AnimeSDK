#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_17.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1852C420)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistRowWidgetController_ItemData_TypeDefinitionIndex = 88058;

	class UIBangkovWishlistRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::Enum_3_96F6662CA3713095_17 SrcType; // 0x10
		::System::UInt32 SrcId; // 0x14
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
