#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_17.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E48380)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishListkRowWidgetController_ItemData_TypeDefinitionIndex = 77487;

	class UIBangkovWishListkRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::Enum_3_96F6662CA3713095_17 SrcType; // 0x10
		::System::UInt32 SrcId; // 0x14
		::System::Boolean IsEmpty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
