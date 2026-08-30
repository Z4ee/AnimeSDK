#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD41D970)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS7_0__GETSORTEDMPITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xD41D980)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass7_0_TypeDefinitionIndex = 65753;

	class InventoryModule___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 capturedPriorityID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMPItems_b__0(::RPG::Client::ItemData* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS7_0__GETSORTEDMPITEMS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
