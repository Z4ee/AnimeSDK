#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ActivityFindTrotterConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1AE65430)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE65FC0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE660D0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETCURRENTFINDTROTTERDATA_OFFSET UNITYSDK_OFFSET(0x1AE659A0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETFINDTROTTERDATA_OFFSET UNITYSDK_OFFSET(0x1AE65F10)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE661A0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETLATESTFINDTROTTERDATA_OFFSET UNITYSDK_OFFSET(0x1AE66020)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETNEXTUNLOCKSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AE66740)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE65CF0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETTOTALTROTTERDATAS_OFFSET UNITYSDK_OFFSET(0x1AE65DB0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETTROTTERSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AE66650)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_FINALQUESTID_OFFSET UNITYSDK_OFFSET(0x1AE668A0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_INFINDING_OFFSET UNITYSDK_OFFSET(0x1AE668F0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_ISALLUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AE667B0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_ISWAITINGSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AE66810)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISFINALREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1AE658F0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISFINALREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1AE66310)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISFINDTROTTERMISSION_OFFSET UNITYSDK_OFFSET(0x1AE65A30)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1AE656C0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISSTARTSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1AE65B90)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1AE65080)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA_TAKEFINALREWARD_OFFSET UNITYSDK_OFFSET(0x1AE663C0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE64FF0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA__GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AE653E0)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA__ISFINDTROTTERCURRENT_OFFSET UNITYSDK_OFFSET(0x1AE66590)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA__ISFINDTROTTERFINISHED_OFFSET UNITYSDK_OFFSET(0x1AE66250)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA__ISFINDTROTTERINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AE66490)
#define RPG_CLIENT_FINDTROTTERACTIVITYDATA__REQUESTDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0x1AE66A30)

namespace RPG::Client
{
	inline static constexpr unsigned int FindTrotterActivityData_TypeDefinitionIndex = 61719;

	class FindTrotterActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::GameCore::ActivityFindTrotterConfigRow* _LastFinishedFindTrotterData; // 0xA0
		::RPG::GameCore::ActivityFindTrotterConfigRow* _LastestFindTrotterData; // 0xA8
		::RPG::GameCore::ActivityFindTrotterConfigRow* _CurrentFindTrotterData; // 0xB0
		::System::Boolean _HasPrepared; // 0xB8
		::System::UInt32 _FinalQuestID; // 0xBC

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void RequestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_REQUESTDATA_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_DATAPREPARED_OFFSET))(this);
		}

		::System::Boolean IsFindTrotterMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISFINDTROTTERMISSION_OFFSET))(this, a1);
		}

		::System::Boolean IsStartSubMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISSTARTSUBMISSION_OFFSET))(this, a1);
		}

		::System::Int32 GetTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETTOTALCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ActivityFindTrotterConfigRow*>* GetTotalTrotterDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ActivityFindTrotterConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETTOTALTROTTERDATAS_OFFSET))(this);
		}

		::System::Int32 GetAvailableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETAVAILABLECOUNT_OFFSET))(this);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetFinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Boolean IsFinalRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISFINALREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsFinalRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_ISFINALREWARDTAKEN_OFFSET))(this);
		}

		::System::Void TakeFinalReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_TAKEFINALREWARD_OFFSET))(this);
		}

		::RPG::GameCore::ActivityFindTrotterConfigRow* GetLatestFindTrotterData()
		{
			return ((::RPG::GameCore::ActivityFindTrotterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETLATESTFINDTROTTERDATA_OFFSET))(this);
		}

		::RPG::GameCore::ActivityFindTrotterConfigRow* GetCurrentFindTrotterData()
		{
			return ((::RPG::GameCore::ActivityFindTrotterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETCURRENTFINDTROTTERDATA_OFFSET))(this);
		}

		::RPG::GameCore::ActivityFindTrotterConfigRow* GetFindTrotterData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFindTrotterConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETFINDTROTTERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetTrotterScheduleData(::RPG::GameCore::ActivityFindTrotterConfigRow* a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::RPG::GameCore::ActivityFindTrotterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETTROTTERSCHEDULEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetNextUnlockScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GETNEXTUNLOCKSCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 _GetActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA__GETACTIVITYID_OFFSET))(this);
		}

		::System::Boolean _IsFindTrotterInSchedule(::RPG::GameCore::ActivityFindTrotterConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFindTrotterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA__ISFINDTROTTERINSCHEDULE_OFFSET))(this, a1);
		}

		::System::Boolean _IsFindTrotterCurrent(::RPG::GameCore::ActivityFindTrotterConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFindTrotterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA__ISFINDTROTTERCURRENT_OFFSET))(this, a1);
		}

		::System::Boolean _IsFindTrotterFinished(::RPG::GameCore::ActivityFindTrotterConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFindTrotterConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA__ISFINDTROTTERFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_ISALLUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_ISWAITINGSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_FinalQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_FINALQUESTID_OFFSET))(this);
		}

		::System::Boolean get_InFinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA_GET_INFINDING_OFFSET))(this);
		}

		::System::Void _RequestData_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDTROTTERACTIVITYDATA__REQUESTDATA_B__1_0_OFFSET))(this);
		}
	};
}
