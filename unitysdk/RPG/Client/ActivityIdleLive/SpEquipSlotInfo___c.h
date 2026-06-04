#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB17F020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB17F060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__GETALLEQUIPPEDSLOTS_B__12_0_OFFSET UNITYSDK_OFFSET(0xB17F110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__HASUNLOCKEDSLOT_B__11_0_OFFSET UNITYSDK_OFFSET(0xB17F070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__ISSLOTALLEQUIPPED_B__25_0_OFFSET UNITYSDK_OFFSET(0xB17F130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__ISSLOTALLEQUIPPED_B__25_1_OFFSET UNITYSDK_OFFSET(0xB17F1D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C___GETFIRSTEMPTYSLOT_B__26_0_OFFSET UNITYSDK_OFFSET(0xB17F1F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo___c_TypeDefinitionIndex = 70108;

	class SpEquipSlotInfo___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__26_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(SpEquipSlotInfo___c_TypeDefinitionIndex)->GetStaticField(0x55370);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SpEquipSlotInfo___c_TypeDefinitionIndex)->GetStaticField(0x55378);
		}
		static ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::SpEquipSlotInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SpEquipSlotInfo___c_TypeDefinitionIndex)->GetStaticField(0x55380);
		}
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__25_1()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(SpEquipSlotInfo___c_TypeDefinitionIndex)->GetStaticField(0x55388);
		}
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__25_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(SpEquipSlotInfo___c_TypeDefinitionIndex)->GetStaticField(0x55390);
		}
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(SpEquipSlotInfo___c_TypeDefinitionIndex)->GetStaticField(0x55398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUnlockedSlot_b__11_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__HASUNLOCKEDSLOT_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllEquippedSlots_b__12_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__GETALLEQUIPPEDSLOTS_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsSlotAllEquipped_b__25_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__ISSLOTALLEQUIPPED_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsSlotAllEquipped_b__25_1(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__ISSLOTALLEQUIPPED_B__25_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetFirstEmptySlot_b__26_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C___GETFIRSTEMPTYSLOT_B__26_0_OFFSET))(this, a1);
		}
	};
}
