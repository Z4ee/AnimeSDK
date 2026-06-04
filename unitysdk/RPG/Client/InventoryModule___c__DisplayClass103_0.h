#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemComefromRow; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD4C0C0)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS103_0__GETITEMCOMEFROM_B__0_OFFSET UNITYSDK_OFFSET(0xBD54920)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass103_0_TypeDefinitionIndex = 61422;

	class InventoryModule___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetItemComeFrom_b__0(::RPG::GameCore::ItemComefromRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS103_0__GETITEMCOMEFROM_B__0_OFFSET))(this, a1);
		}
	};
}
