#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_17.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x112E45D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListDialogRowWidgetController_ItemData_TypeDefinitionIndex = 54723;

	class UIZenkovWishListDialogRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::Enum_3_96F6662CA3713095_17 SrcType; // 0x10
		::System::UInt32 SrcId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
