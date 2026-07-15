#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvertibleItemData; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C423E0)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS89_0__GETCONVERTIBLEITEMDATABYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0x16C4D4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass89_0_TypeDefinitionIndex = 62770;

	class InventoryModule___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConvertibleItemDataByItemID_b__0(::RPG::Client::ConvertibleItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConvertibleItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS89_0__GETCONVERTIBLEITEMDATABYITEMID_B__0_OFFSET))(this, a1);
		}
	};
}
