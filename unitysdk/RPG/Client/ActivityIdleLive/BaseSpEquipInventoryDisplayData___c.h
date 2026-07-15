#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D1EA30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1EA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C___CTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x19D1EA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C___GETSTRONGESTEQUIPLIST_B__35_1_OFFSET UNITYSDK_OFFSET(0x19D1EB90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int BaseSpEquipInventoryDisplayData___c_TypeDefinitionIndex = 71828;

	class BaseSpEquipInventoryDisplayData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData___c**)Il2CppClass::FromTypeDefinitionIndex(BaseSpEquipInventoryDisplayData___c_TypeDefinitionIndex)->GetStaticField(0x3C0E0);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>** StaticGet___9__35_1()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(BaseSpEquipInventoryDisplayData___c_TypeDefinitionIndex)->GetStaticField(0x3C0E8);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>**)Il2CppClass::FromTypeDefinitionIndex(BaseSpEquipInventoryDisplayData___c_TypeDefinitionIndex)->GetStaticField(0x3C0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__19_0(::RPG::Client::ActivityIdleLive::SpecialEquip* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C___CTOR_B__19_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __GetStrongestEquipList_b__35_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C___GETSTRONGESTEQUIPLIST_B__35_1_OFFSET))(this, a1, a2);
		}
	};
}
