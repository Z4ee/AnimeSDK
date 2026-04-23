#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B6F2D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CHESTCOUNT_OFFSET UNITYSDK_OFFSET(0xD240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CRYSTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_TICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CHESTCOUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CRYSTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_TICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x299E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA__CHECKANDADDREWARD_OFFSET UNITYSDK_OFFSET(0x9B6FA40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeRewardData_TypeDefinitionIndex = 69435;

	struct alignas(4) IdleLiveQuestTreeRewardData
	{
		::System::UInt32 _TicketCount_k__BackingField; // 0x10
		::System::UInt32 _CrystalCount_k__BackingField; // 0x14
		::System::UInt32 _ChestCount_k__BackingField; // 0x18

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData Create(::System::UInt32 rewardId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_CREATE_OFFSET))(rewardId);
		}

		static ::System::Void _CheckAndAddReward(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData& data, ::System::UInt32 itemId, ::System::UInt32 count, ::System::UInt32 crystalId, ::System::UInt32 ticketId, ::System::UInt32 chestId)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA__CHECKANDADDREWARD_OFFSET))(data, itemId, count, crystalId, ticketId, chestId);
		}

		::System::UInt32 get_TicketCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_TICKETCOUNT_OFFSET))(this);
		}

		::System::Void set_TicketCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_TICKETCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CrystalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CRYSTALCOUNT_OFFSET))(this);
		}

		::System::Void set_CrystalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CRYSTALCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ChestCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_GET_CHESTCOUNT_OFFSET))(this);
		}

		::System::Void set_ChestCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEREWARDDATA_SET_CHESTCOUNT_OFFSET))(this, value);
		}
	};
}
