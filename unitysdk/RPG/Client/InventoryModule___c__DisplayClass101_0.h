#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemComefromRow; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99585B0)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS101_0__GETITEMCOMEFROM_B__0_OFFSET UNITYSDK_OFFSET(0x99603E0)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass101_0_TypeDefinitionIndex = 53354;

	class InventoryModule___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetItemComeFrom_b__0(::RPG::GameCore::ItemComefromRow* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS101_0__GETITEMCOMEFROM_B__0_OFFSET))(this, x);
		}
	};
}
