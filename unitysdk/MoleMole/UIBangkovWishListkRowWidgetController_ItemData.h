#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_46.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1680D430)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishListkRowWidgetController_ItemData_TypeDefinitionIndex = 76392;

	class UIBangkovWishListkRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::Enum_3_0A3761FE34514D6C_46 SrcType; // 0x10
		::System::Boolean IsEmpty; // 0x14
		::System::UInt32 SrcId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
