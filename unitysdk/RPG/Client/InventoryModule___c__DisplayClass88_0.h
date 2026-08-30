#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvertibleItemData; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194CE8B0)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS88_0__GETCONVERTIBLEITEMDATABYITEMSUBTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x194DB620)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass88_0_TypeDefinitionIndex = 65754;

	class InventoryModule___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemSubType itemSubType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConvertibleItemDataByitemSubType_b__0(::RPG::Client::ConvertibleItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConvertibleItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS88_0__GETCONVERTIBLEITEMDATABYITEMSUBTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
