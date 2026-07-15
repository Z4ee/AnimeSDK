#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_1_A8B77D0FCA806220;
class Class_1_D17272E82AE804C2_565;
class Class_3_1C169A0F2ACF26E7;
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotLevelUpReward; }
namespace System { class String; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ADD_PROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1A17DC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLEVELUPREWARD_OFFSET UNITYSDK_OFFSET(0x1A17EDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1A17D920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETNEXTLEVELUPREWARD_OFFSET UNITYSDK_OFFSET(0x1A17ECD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTEXTRAPOWERBYLEVEL_OFFSET UNITYSDK_OFFSET(0x1A17D810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTLEVELBYSLOTID_OFFSET UNITYSDK_OFFSET(0x1A17EC40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETUPGRADECOST_OFFSET UNITYSDK_OFFSET(0x1A17D6B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GET_CANUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x1A17EEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GET_LIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1A1778A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1A17DDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ONPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1A17DCF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_REMOVE_PROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1A17DC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEMGRINFO_OFFSET UNITYSDK_OFFSET(0x1A17E740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x1A17E5E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x1A17EB80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17EF40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__UPDATESLOT_OFFSET UNITYSDK_OFFSET(0x1A17E6A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamSlotInfo_TypeDefinitionIndex = 71500;

	class IdleLiveTeamSlotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SlotUpgradeCostDic; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SlotLevelDic; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* _SlotExtraPowerByLevelDic; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*>* _SlotLevelUpRewardList; // 0x28
		::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* ProtocolReceived; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__CTOR_OFFSET))(this);
		}

		::System::Void add_ProtocolReceived(::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ADD_PROTOCOLRECEIVED_OFFSET))(this, a1);
		}

		::System::Void remove_ProtocolReceived(::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_REMOVE_PROTOCOLRECEIVED_OFFSET))(this, a1);
		}

		::System::Void OnProtocolReceived(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_ONPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_INIT_OFFSET))(this);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::Void UpdateUpgradeSlot(::Class_1_D17272E82AE804C2_565* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_565*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEUPGRADESLOT_OFFSET))(this, a1);
		}

		::System::Void UpdateMgrInfo(::Class_1_A8B77D0FCA806220* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A8B77D0FCA806220*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPDATEMGRINFO_OFFSET))(this, a1);
		}

		::System::Void UpgradeSlot(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_UPGRADESLOT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSlotLevelBySlotID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTLEVELBYSLOTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetUpgradeCost(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETUPGRADECOST_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetSlotExtraPowerByLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETSLOTEXTRAPOWERBYLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* GetNextLevelUpReward(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETNEXTLEVELUPREWARD_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* GetLevelUpReward(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO_GETLEVELUPREWARD_OFFSET))(this, a1);
		}

		::System::Void _UpdateSlot(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO__UPDATESLOT_OFFSET))(this, a1, a2);
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
