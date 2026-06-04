#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_FATESUPPORTTOASTPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B4F30)
#define RPG_CLIENT_FATESUPPORTTOASTPART_GET_REWARDINGAVATARID_OFFSET UNITYSDK_OFFSET(0xB9B60B0)
#define RPG_CLIENT_FATESUPPORTTOASTPART_GET__ACTIVITYFUNCUNLOCKHINTID_OFFSET UNITYSDK_OFFSET(0xB9B5F90)
#define RPG_CLIENT_FATESUPPORTTOASTPART_GET__ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB9B5F80)
#define RPG_CLIENT_FATESUPPORTTOASTPART_GET__ISSEEN_OFFSET UNITYSDK_OFFSET(0xB9B6200)
#define RPG_CLIENT_FATESUPPORTTOASTPART_GET__TOASTFUNCNAME_OFFSET UNITYSDK_OFFSET(0xB9B61C0)
#define RPG_CLIENT_FATESUPPORTTOASTPART_GET__TOASTINGSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xB9B5FA0)
#define RPG_CLIENT_FATESUPPORTTOASTPART_INIT_OFFSET UNITYSDK_OFFSET(0xB9B4810)
#define RPG_CLIENT_FATESUPPORTTOASTPART_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB9B4E80)
#define RPG_CLIENT_FATESUPPORTTOASTPART_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xB9B67F0)
#define RPG_CLIENT_FATESUPPORTTOASTPART_TRYGETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB9B6B50)
#define RPG_CLIENT_FATESUPPORTTOASTPART_TRYSETSEEN_OFFSET UNITYSDK_OFFSET(0xB9B6A50)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9B62B0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xB9B6790)
#define RPG_CLIENT_FATESUPPORTTOASTPART__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B53B0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__DETECTACTIVITYTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB9B6C70)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ISACTIVITYINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB9B7DB0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONDETECTEDACTIVITYINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB9B7BC0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONDIRECTDELIVERYNOTICEDATAREADY_OFFSET UNITYSDK_OFFSET(0xB9B6FA0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONDIRECTDELIVERYNOTICETOASTSHOWN_OFFSET UNITYSDK_OFFSET(0xB9B7180)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONGACHAPOOLUPDATE_OFFSET UNITYSDK_OFFSET(0xB9B7570)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xB9B6C00)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0xB9B75E0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xB9B7AB0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0xB9B7890)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONUINEWSYSTEMHINTBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B7650)
#define RPG_CLIENT_FATESUPPORTTOASTPART__ONUITOASTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB9B7960)
#define RPG_CLIENT_FATESUPPORTTOASTPART__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9B6710)
#define RPG_CLIENT_FATESUPPORTTOASTPART__REQUESTUNLOCKDATA_B__29_0_OFFSET UNITYSDK_OFFSET(0xB9B7F40)
#define RPG_CLIENT_FATESUPPORTTOASTPART__TRIGGERTRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xB9B79C0)
#define RPG_CLIENT_FATESUPPORTTOASTPART__TRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xB9B7E70)
#define RPG_CLIENT_FATESUPPORTTOASTPART___ONDETECTEDACTIVITYINTIMELIMITSCHEDULE_B__42_0_OFFSET UNITYSDK_OFFSET(0xB9B8190)
#define RPG_CLIENT_FATESUPPORTTOASTPART___ONDIRECTDELIVERYNOTICETOASTSHOWN_B__34_0_OFFSET UNITYSDK_OFFSET(0xB9B7FC0)
#define RPG_CLIENT_FATESUPPORTTOASTPART___ONUINEWSYSTEMHINTBEGIN_B__37_0_OFFSET UNITYSDK_OFFSET(0xB9B80B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportToastPart_TypeDefinitionIndex = 59960;

	class FateSupportToastPart : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPromise* _WaitForDataReady; // 0x10
		::RPG::Client::Promises::Promise* _WaitForGachaDataReady; // 0x18
		::RPG::Client::Promises::Promise* _WaitForActivityDataReady; // 0x20
		::RPG::Client::Promises::Promise* _WaitForFuncUnlockDataReady; // 0x28
		::RPG::Client::Promises::Promise* _WaitForServerPrefDataReady; // 0x30
		::RPG::Client::ScheduleTask* _WaitForScheduleOpenTask; // 0x38
		::System::Boolean _IsSubMissionToastSuppressed; // 0x40
		::System::Boolean _ShouldToast; // 0x41
		::System::Boolean _IsToasting; // 0x42
		::System::Boolean _IsActivityFuncUnlocked; // 0x43
		::System::Boolean _IsExpectingAvatarRewardNotice; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 get__ActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_GET__ACTIVITYID_OFFSET))();
		}

		static ::System::UInt32 get__ActivityFuncUnlockHintID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_GET__ACTIVITYFUNCUNLOCKHINTID_OFFSET))();
		}

		static ::System::UInt32 get__ToastingSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_GET__TOASTINGSUBMISSIONID_OFFSET))();
		}

		static ::System::UInt32 get_RewardingAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_GET_REWARDINGAVATARID_OFFSET))();
		}

		static ::System::String* get__ToastFuncName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_GET__TOASTFUNCNAME_OFFSET))();
		}

		::System::Boolean get__IsSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_GET__ISSEEN_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void RequestUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_REQUESTUNLOCKDATA_OFFSET))(this);
		}

		::System::Void TrySetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_TRYSETSEEN_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* TryGetScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART_TRYGETSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnDirectDeliveryNoticeDataReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONDIRECTDELIVERYNOTICEDATAREADY_OFFSET))(this);
		}

		::System::Void _OnDirectDeliveryNoticeToastShown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONDIRECTDELIVERYNOTICETOASTSHOWN_OFFSET))(this, a1);
		}

		::System::Void _OnGachaPoolUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONGACHAPOOLUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnServerPrefRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONSERVERPREFREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnUINewSystemHintBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONUINEWSYSTEMHINTBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnTakenSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONTAKENSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnUIToastMainPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONUITOASTMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Void _DetectActivityTimeLimitSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__DETECTACTIVITYTIMELIMITSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnDetectedActivityInTimeLimitSchedule(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ONDETECTEDACTIVITYINTIMELIMITSCHEDULE_OFFSET))(this, a1);
		}

		::System::Boolean _IsActivityInTimeLimitSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__ISACTIVITYINTIMELIMITSCHEDULE_OFFSET))(this);
		}

		::System::Void _TriggerTryEnqueueToast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__TRIGGERTRYENQUEUETOAST_OFFSET))(this, a1);
		}

		::System::Void _TryEnqueueToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__TRYENQUEUETOAST_OFFSET))(this);
		}

		::System::Void _RequestUnlockData_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART__REQUESTUNLOCKDATA_B__29_0_OFFSET))(this);
		}

		::System::Void __OnDirectDeliveryNoticeToastShown_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___ONDIRECTDELIVERYNOTICETOASTSHOWN_B__34_0_OFFSET))(this);
		}

		::System::Void __OnUINewSystemHintBegin_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___ONUINEWSYSTEMHINTBEGIN_B__37_0_OFFSET))(this);
		}

		::System::Void __OnDetectedActivityInTimeLimitSchedule_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTTOASTPART___ONDETECTEDACTIVITYINTIMELIMITSCHEDULE_B__42_0_OFFSET))(this);
		}
	};
}
