#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/BaseSpEquipInventoryDisplayData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET UNITYSDK_OFFSET(0xB17B360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0xB17B530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET UNITYSDK_OFFSET(0xB17B6C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET UNITYSDK_OFFSET(0xB17B8C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB17B350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__UPDATEQUICKSTRATEGYSELECTEDEQUIPS_OFFSET UNITYSDK_OFFSET(0xB17BAD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipInventoryDisplayData_TypeDefinitionIndex = 70308;

	class SpEquipInventoryDisplayData : public ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*, ::System::UInt32, ::System::Boolean, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ConfirmEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET))(this);
		}

		::System::Void WearStrongestEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET))(this);
		}

		::System::Void _UpdateQuickStrategySelectedEquips(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__UPDATEQUICKSTRATEGYSELECTEDEQUIPS_OFFSET))(this, a1);
		}

		::System::Void WearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET))(this, a1);
		}

		::System::Void TakeoffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET))(this, a1);
		}
	};
}
