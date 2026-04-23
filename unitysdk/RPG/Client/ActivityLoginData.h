#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityLoginData_RewardStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_D55C9EF3F758FF20;
namespace RPG::GameCore { class ActivityLoginConfigRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C00B20)
#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x9C00B60)
#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_ISFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C00B40)
#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_LOGINDAYS_OFFSET UNITYSDK_OFFSET(0x9C00BB0)
#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_LOGINID_OFFSET UNITYSDK_OFFSET(0x9C00B00)
#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_REWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x9C00B80)
#define RPG_CLIENT_ACTIVITYLOGINDATA_GET_REWARDSTATUSES_OFFSET UNITYSDK_OFFSET(0x9C00BA0)
#define RPG_CLIENT_ACTIVITYLOGINDATA_ISBEFORETODAYREWARDALLTAKEN_OFFSET UNITYSDK_OFFSET(0x9C01250)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C00B30)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SET_ISFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C00B50)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SET_LOGINDAYS_OFFSET UNITYSDK_OFFSET(0x9C00BC0)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SET_LOGINID_OFFSET UNITYSDK_OFFSET(0x9C00B10)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x9C00D20)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SYNCLOGINDAYS_OFFSET UNITYSDK_OFFSET(0x9C01190)
#define RPG_CLIENT_ACTIVITYLOGINDATA_SYNCTAKENDAYS_OFFSET UNITYSDK_OFFSET(0x9C00DB0)
#define RPG_CLIENT_ACTIVITYLOGINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C00BD0)
#define RPG_CLIENT_ACTIVITYLOGINDATA__INITREWARDSTATUSARRAY_OFFSET UNITYSDK_OFFSET(0x9C00C30)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLoginData_TypeDefinitionIndex = 56955;

	class ActivityLoginData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::ActivityLoginData_RewardStatus>* _RewardStatusArray; // 0x10
		::System::Action* OnSyncTakenDays; // 0x18
		::RPG::GameCore::ActivityLoginConfigRow* _Row; // 0x20
		::System::Action* OnSyncData; // 0x28
		::System::UInt32 _ActivityID_k__BackingField; // 0x30
		::System::UInt32 _LoginID_k__BackingField; // 0x34
		::System::Boolean _IsFullCompleted_k__BackingField; // 0x38
		::System::UInt32 _LoginDays_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 loginID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA__CTOR_OFFSET))(this, loginID);
		}

		::System::UInt32 get_LoginID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_LOGINID_OFFSET))(this);
		}

		::System::Void set_LoginID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SET_LOGINID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SET_ACTIVITYID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFullCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_ISFULLCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsFullCompleted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SET_ISFULLCOMPLETED_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RewardIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_REWARDIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ActivityLoginData_RewardStatus>* get_RewardStatuses()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityLoginData_RewardStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_REWARDSTATUSES_OFFSET))(this);
		}

		::System::UInt32 get_LoginDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_GET_LOGINDAYS_OFFSET))(this);
		}

		::System::Void set_LoginDays(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SET_LOGINDAYS_OFFSET))(this, value);
		}

		::System::Void SyncData(::Class_1_D55C9EF3F758FF20* loginActivityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D55C9EF3F758FF20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SYNCDATA_OFFSET))(this, loginActivityData);
		}

		::System::Void SyncTakenDays(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* takenDays)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SYNCTAKENDAYS_OFFSET))(this, takenDays);
		}

		::System::Void SyncLoginDays(::System::UInt32 loginDays)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_SYNCLOGINDAYS_OFFSET))(this, loginDays);
		}

		::System::Boolean IsBeforeTodayRewardAllTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA_ISBEFORETODAYREWARDALLTAKEN_OFFSET))(this);
		}

		::System::Void _InitRewardStatusArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOGINDATA__INITREWARDSTATUSARRAY_OFFSET))(this);
		}
	};
}
