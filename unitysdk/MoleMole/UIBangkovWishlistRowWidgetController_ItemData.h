#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_46.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E6F940)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistRowWidgetController_ItemData_TypeDefinitionIndex = 53049;

	class UIBangkovWishlistRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::System::UInt32 SrcId; // 0x10
		::Enum_3_0A3761FE34514D6C_46 SrcType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
