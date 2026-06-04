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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB156580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CONVERTSERVERSTATUSTOLOCALSTATUS_OFFSET UNITYSDK_OFFSET(0xB156340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB156060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GETPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0xB156700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xB155FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB155F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xB155FD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0xB156010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDNUM_OFFSET UNITYSDK_OFFSET(0xB156030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB155FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_ISSAMEQUEST_OFFSET UNITYSDK_OFFSET(0xB1566B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xB155FC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB155FA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xB155FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDICON_OFFSET UNITYSDK_OFFSET(0xB156020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDNUM_OFFSET UNITYSDK_OFFSET(0xB156050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB156000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB1565D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB156190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__INITREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB1563D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestData_TypeDefinitionIndex = 70178;

	class IdleLiveQuestData : public ::System::Object
	{
	public:
		::System::String* _RewardIcon_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _RewardNum_k__BackingField; // 0x18
		::System::UInt32 _MaxProgress_k__BackingField; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus _Status_k__BackingField; // 0x34
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::System::UInt32 _CurProgress_k__BackingField; // 0x48
		::System::UInt32 _Id; // 0x4C

		::System::Void _ctor(::RPG::GameCore::IdleLiveTaskRow* a1, ::Class_1_668FE281FA72D3E8_11* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveTaskRow*, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_MAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_MaxProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_MAXPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus get_Status()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::String* get_RewardIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDICON_OFFSET))(this);
		}

		::System::Void set_RewardIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDICON_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_RewardNum()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDNUM_OFFSET))(this);
		}

		::System::Void set_RewardNum(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDNUM_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestData* Create(::Class_1_668FE281FA72D3E8_11* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestData*(*)(::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitRewardData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__INITREWARDDATA_OFFSET))(this, a1);
		}

		::System::Boolean CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CANTAKEREWARD_OFFSET))(this);
		}

		::System::Void UpdateData(::Class_1_668FE281FA72D3E8_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsSameQuest(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_ISSAMEQUEST_OFFSET))(this, a1);
		}

		::System::Single GetProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GETPROGRESSRATIO_OFFSET))(this);
		}

		::System::Void ConvertServerStatusToLocalStatus(::Enum_3_DB663931210BBC27_39 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_39))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CONVERTSERVERSTATUSTOLOCALSTATUS_OFFSET))(this, a1);
		}
	};
}
