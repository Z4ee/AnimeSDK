#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/UniqueItemKey.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_INVENTORYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3727C0)
#define RPG_CLIENT_INVENTORYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3727F0)
#define RPG_CLIENT_INVENTORYMODULE___C__UNLOCKALLRANKMAXEQUIPMENTS_B__1_0_OFFSET UNITYSDK_OFFSET(0xD372800)
#define RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTPETITEMS_B__37_0_OFFSET UNITYSDK_OFFSET(0xD372980)
#define RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTPETITEMS_B__37_1_OFFSET UNITYSDK_OFFSET(0xD372990)
#define RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTVIRTUALITEMS_B__116_0_OFFSET UNITYSDK_OFFSET(0xD3729A0)
#define RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTVIRTUALITEMS_B__116_1_OFFSET UNITYSDK_OFFSET(0xD3729B0)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c_TypeDefinitionIndex = 65686;

	class InventoryModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ItemData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ItemData*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x188F0);
		}
		static ::RPG::Client::InventoryModule___c** StaticGet___9()
		{
			return (::RPG::Client::InventoryModule___c**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x188F8);
		}
		static ::System::Func_2<::RPG::Client::UniqueItemKey, ::System::UInt32>** StaticGet___9__116_1()
		{
			return (::System::Func_2<::RPG::Client::UniqueItemKey, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x18900);
		}
		static ::System::Func_2<::RPG::Client::UniqueItemKey, ::System::Boolean>** StaticGet___9__116_0()
		{
			return (::System::Func_2<::RPG::Client::UniqueItemKey, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x18908);
		}
		static ::System::Func_2<::RPG::Client::UniqueItemKey, ::System::Boolean>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::RPG::Client::UniqueItemKey, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x18910);
		}
		static ::System::Func_2<::RPG::Client::UniqueItemKey, ::RPG::Client::Pet::PetInstanceIdentifier>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::RPG::Client::UniqueItemKey, ::RPG::Client::Pet::PetInstanceIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___c_TypeDefinitionIndex)->GetStaticField(0x18918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UnlockAllRankMaxEquipments_b__1_0(::RPG::Client::ItemData* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__UNLOCKALLRANKMAXEQUIPMENTS_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __ClearExceptPetItems_b__37_0(::RPG::Client::UniqueItemKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTPETITEMS_B__37_0_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::PetInstanceIdentifier __ClearExceptPetItems_b__37_1(::RPG::Client::UniqueItemKey a1)
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTPETITEMS_B__37_1_OFFSET))(this, a1);
		}

		::System::Boolean __ClearExceptVirtualItems_b__116_0(::RPG::Client::UniqueItemKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTVIRTUALITEMS_B__116_0_OFFSET))(this, a1);
		}

		::System::UInt32 __ClearExceptVirtualItems_b__116_1(::RPG::Client::UniqueItemKey a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C___CLEAREXCEPTVIRTUALITEMS_B__116_1_OFFSET))(this, a1);
		}
	};
}
