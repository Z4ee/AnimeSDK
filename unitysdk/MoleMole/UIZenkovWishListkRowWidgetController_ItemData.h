#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_17.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E54B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController_ItemData_TypeDefinitionIndex = 78865;

	class UIZenkovWishListkRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::Enum_3_96F6662CA3713095_17 SrcType; // 0x10
		::System::Boolean IsEmpty; // 0x14
		::System::UInt32 SrcId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
