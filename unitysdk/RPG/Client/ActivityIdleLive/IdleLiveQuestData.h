#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_39.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveQuestStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_11;
namespace RPG::GameCore { class IdleLiveTaskRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x9B6E3B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CONVERTSERVERSTATUSTOLOCALSTATUS_OFFSET UNITYSDK_OFFSET(0x9B6E170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B6DE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GETPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x9B6E530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B6DDE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9B6DDC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B6DE00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x9B6DE40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDNUM_OFFSET UNITYSDK_OFFSET(0x9B6DE60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B6DE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_ISSAMEQUEST_OFFSET UNITYSDK_OFFSET(0x9B6E4E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B6DDF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x9B6DDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B6DE10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x9B6DE50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDNUM_OFFSET UNITYSDK_OFFSET(0x9B6DE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B6DE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x9B6E400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6DFC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__INITREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9B6E200)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestData_TypeDefinitionIndex = 69366;

	class IdleLiveQuestData : public ::System::Object
	{
	public:
		::System::String* _RewardIcon_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _RewardNum_k__BackingField; // 0x18
		::System::UInt32 _CurProgress_k__BackingField; // 0x30
		::System::UInt32 _MaxProgress_k__BackingField; // 0x34
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus _Status_k__BackingField; // 0x48
		::System::UInt32 _Id; // 0x4C

		::System::Void _ctor(::RPG::GameCore::IdleLiveTaskRow* taskRow, ::Class_1_668FE281FA72D3E8_11* protoTask)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveTaskRow*, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__CTOR_OFFSET))(this, taskRow, protoTask);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_DESC_OFFSET))(this, value);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_CURPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_MAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_MaxProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_MAXPROGRESS_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus get_Status()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::String* get_RewardIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDICON_OFFSET))(this);
		}

		::System::Void set_RewardIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDICON_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_RewardNum()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDNUM_OFFSET))(this);
		}

		::System::Void set_RewardNum(::RPG::Client::ActivityIdleLive::IdleLiveDecimal value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDNUM_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestData* Create(::Class_1_668FE281FA72D3E8_11* protoTask)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestData*(*)(::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CREATE_OFFSET))(protoTask);
		}

		::System::Void _InitRewardData(::System::UInt32 rewardId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__INITREWARDDATA_OFFSET))(this, rewardId);
		}

		::System::Boolean CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CANTAKEREWARD_OFFSET))(this);
		}

		::System::Void UpdateData(::Class_1_668FE281FA72D3E8_11* serverTask)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_UPDATEDATA_OFFSET))(this, serverTask);
		}

		::System::Boolean IsSameQuest(::System::UInt32 questId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_ISSAMEQUEST_OFFSET))(this, questId);
		}

		::System::Single GetProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GETPROGRESSRATIO_OFFSET))(this);
		}

		::System::Void ConvertServerStatusToLocalStatus(::Enum_3_DB663931210BBC27_39 serverStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_39))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CONVERTSERVERSTATUSTOLOCALSTATUS_OFFSET))(this, serverStatus);
		}
	};
}
