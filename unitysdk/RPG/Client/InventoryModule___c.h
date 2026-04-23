#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_INVENTORYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA64DDE0)
#define RPG_CLIENT_INVENTORYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA64DE20)
#define RPG_CLIENT_INVENTORYMODULE___C__UNLOCKALLRANKMAXEQUIPMENTS_B__1_0_OFFSET UNITYSDK_OFFSET(0xA64DE30)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c_TypeDefinitionIndex = 60487;

	class InventoryModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ItemData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ItemData*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x24440);
		}
		static ::RPG::Client::InventoryModule___c** StaticGet___9()
		{
			return (::RPG::Client::InventoryModule___c**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x24448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UnlockAllRankMaxEquipments_b__1_0(::RPG::Client::ItemData* data, ::RPG::Client::ItemData* itemData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__UNLOCKALLRANKMAXEQUIPMENTS_B__1_0_OFFSET))(this, data, itemData);
		}
	};
}
