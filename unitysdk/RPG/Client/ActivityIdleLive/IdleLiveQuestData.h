#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_41.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveQuestStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_45;
namespace RPG::GameCore { class IdleLiveTaskRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1C0FCEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CONVERTSERVERSTATUSTOLOCALSTATUS_OFFSET UNITYSDK_OFFSET(0x1C0FCC70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0FC990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GETPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x1C0FD030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0FC8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C0FC8C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0FC900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x1C0FC940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_REWARDNUM_OFFSET UNITYSDK_OFFSET(0x1C0FC960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C0FC920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_ISSAMEQUEST_OFFSET UNITYSDK_OFFSET(0x1C0FCFE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0FC8F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1C0FC8D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0FC910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x1C0FC950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_REWARDNUM_OFFSET UNITYSDK_OFFSET(0x1C0FC980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C0FC930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1C0FCF00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FCAC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__INITREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1C0FCD00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestData_TypeDefinitionIndex = 75007;

	class IdleLiveQuestData : public ::System::Object
	{
	public:
		::System::String* _RewardIcon_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _RewardNum_k__BackingField; // 0x18
		::System::UInt32 _MaxProgress_k__BackingField; // 0x30
		::System::UInt32 _CurProgress_k__BackingField; // 0x34
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::System::UInt32 _Id; // 0x48
		::RPG::Client::ActivityIdleLive::IdleLiveQuestStatus _Status_k__BackingField; // 0x4C

		::System::Void _ctor(::RPG::GameCore::IdleLiveTaskRow* a1, ::Class_1_1CBA230307F9C289_45* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveTaskRow*, ::Class_1_1CBA230307F9C289_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__CTOR_OFFSET))(this, a1, a2);
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

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestData* Create(::Class_1_1CBA230307F9C289_45* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestData*(*)(::Class_1_1CBA230307F9C289_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitRewardData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA__INITREWARDDATA_OFFSET))(this, a1);
		}

		::System::Boolean CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CANTAKEREWARD_OFFSET))(this);
		}

		::System::Void UpdateData(::Class_1_1CBA230307F9C289_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsSameQuest(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_ISSAMEQUEST_OFFSET))(this, a1);
		}

		::System::Single GetProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_GETPROGRESSRATIO_OFFSET))(this);
		}

		::System::Void ConvertServerStatusToLocalStatus(::Enum_3_DB663931210BBC27_41 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_41))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTDATA_CONVERTSERVERSTATUSTOLOCALSTATUS_OFFSET))(this, a1);
		}
	};
}
