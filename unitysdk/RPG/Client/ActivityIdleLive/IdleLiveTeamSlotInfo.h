#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_1_0AC743E88BB51C0B;
class Class_1_D1E0AD3915BCCF29_54;
class Class_3_1C169A0F2ACF26E7;
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotLevelUpReward; }
namespace System { class String; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ADD_PROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9BD1D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLEVELUPREWARD_OFFSET UNITYSDK_OFFSET(0x9BD2BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x9BD1B50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETNEXTLEVELUPREWARD_OFFSET UNITYSDK_OFFSET(0x9BD2AB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTEXTRAPOWERBYLEVEL_OFFSET UNITYSDK_OFFSET(0x9BD1980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTLEVELBYSLOTID_OFFSET UNITYSDK_OFFSET(0x9BD2A10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETUPGRADECOST_OFFSET UNITYSDK_OFFSET(0x9BD1820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GET_CANUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x9BD2C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GET_LIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x9BD2C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9BD1EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ONPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9BD1E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_REMOVE_PROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9BD1DA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEMGRINFO_OFFSET UNITYSDK_OFFSET(0x9BD2660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x9BD2500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x9BD2950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD2CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__UPDATESLOT_OFFSET UNITYSDK_OFFSET(0x9BD25C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamSlotInfo_TypeDefinitionIndex = 69165;

	class IdleLiveTeamSlotInfo : public ::System::Object
	{
	public:
		::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* ProtocolReceived; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* _SlotExtraPowerByLevelDic; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SlotUpgradeCostDic; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SlotLevelDic; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*>* _SlotLevelUpRewardList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__CTOR_OFFSET))(this);
		}

		::System::Void add_ProtocolReceived(::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ADD_PROTOCOLRECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_ProtocolReceived(::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_REMOVE_PROTOCOLRECEIVED_OFFSET))(this, value);
		}

		::System::Void OnProtocolReceived(::System::String* propertyName, ::System::Object* protocolData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ONPROTOCOLRECEIVED_OFFSET))(this, propertyName, protocolData);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_INIT_OFFSET))(this);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::Void UpdateUpgradeSlot(::Class_1_D1E0AD3915BCCF29_54* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEUPGRADESLOT_OFFSET))(this, rsp);
		}

		::System::Void UpdateMgrInfo(::Class_1_0AC743E88BB51C0B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0AC743E88BB51C0B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEMGRINFO_OFFSET))(this, info);
		}

		::System::Void UpgradeSlot(::System::UInt32 slotID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPGRADESLOT_OFFSET))(this, slotID, level);
		}

		::System::UInt32 GetSlotLevelBySlotID(::System::UInt32 slotID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTLEVELBYSLOTID_OFFSET))(this, slotID);
		}

		::System::UInt32 GetUpgradeCost(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETUPGRADECOST_OFFSET))(this, level);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetSlotExtraPowerByLevel(::System::UInt32 level)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTEXTRAPOWERBYLEVEL_OFFSET))(this, level);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* GetNextLevelUpReward(::System::UInt32 level)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETNEXTLEVELUPREWARD_OFFSET))(this, level);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* GetLevelUpReward(::System::UInt32 level)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLEVELUPREWARD_OFFSET))(this, level);
		}

		::System::Void _UpdateSlot(::System::UInt32 slotID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__UPDATESLOT_OFFSET))(this, slotID, level);
		}

		::System::Int32 get_LimitLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GET_LIMITLEVEL_OFFSET))(this);
		}

		::System::Boolean get_CanUpgradeSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GET_CANUPGRADESLOT_OFFSET))(this);
		}
	};
}
