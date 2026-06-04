#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_C8EC2537CFD0A41F;
class Class_1_E7B9DD65288306D6;
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATDATA_ADDFINISHEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xC32DF90)
#define RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0xC32DD60)
#define RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0xC32D300)
#define RPG_CLIENT_PAMCHATDATA_CLEARFINISHEDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xC32E160)
#define RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC32DE70)
#define RPG_CLIENT_PAMCHATDATA_CLEARHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0xC32D500)
#define RPG_CLIENT_PAMCHATDATA_GETACTIVITYENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC32DB60)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0xC32E920)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET UNITYSDK_OFFSET(0xC32E590)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET UNITYSDK_OFFSET(0xC32E330)
#define RPG_CLIENT_PAMCHATDATA_GETQUESTIDS_OFFSET UNITYSDK_OFFSET(0xC32EC90)
#define RPG_CLIENT_PAMCHATDATA_GET_CHATREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xC32D820)
#define RPG_CLIENT_PAMCHATDATA_GET_QUESTIONQUEST_OFFSET UNITYSDK_OFFSET(0xC32D8D0)
#define RPG_CLIENT_PAMCHATDATA_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC32EE90)
#define RPG_CLIENT_PAMCHATDATA_GET__CHATREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xC32EEB0)
#define RPG_CLIENT_PAMCHATDATA_GET__QUESTIONQUESTID_OFFSET UNITYSDK_OFFSET(0xC32EFA0)
#define RPG_CLIENT_PAMCHATDATA_HASFINISHEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xC32E0A0)
#define RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0xC32DED0)
#define RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0xC32D410)
#define RPG_CLIENT_PAMCHATDATA_INCREMENTTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC32D560)
#define RPG_CLIENT_PAMCHATDATA_ISALLQUESTCLOSED_OFFSET UNITYSDK_OFFSET(0xC32DA40)
#define RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xC32CE20)
#define RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0xC32DD20)
#define RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC32D270)
#define RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0xC32CE60)
#define RPG_CLIENT_PAMCHATDATA_ISQUESTIONEROPEN_OFFSET UNITYSDK_OFFSET(0xC32D120)
#define RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0xC32D230)
#define RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0xC32E1C0)
#define RPG_CLIENT_PAMCHATDATA_RESETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC32D5A0)
#define RPG_CLIENT_PAMCHATDATA_SENDCHATQUESTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC32D5F0)
#define RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0xC32CDD0)
#define RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC32D2B0)
#define RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0xC32CD80)
#define RPG_CLIENT_PAMCHATDATA_SET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC32EEA0)
#define RPG_CLIENT_PAMCHATDATA_TAKECHATQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xC32D980)
#define RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0xC32CCC0)
#define RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC32CBC0)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0xC32E980)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET UNITYSDK_OFFSET(0xC32E6B0)
#define RPG_CLIENT_PAMCHATDATA__ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC32D030)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData_TypeDefinitionIndex = 59216;

	class PamChatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _HudBubbleTriggeredIDs; // 0x10
		::System::Collections::Generic::List_1<::Class_1_E7B9DD65288306D6*>* _PamChatQuickFunctions; // 0x18
		::System::Collections::Generic::List_1<::Class_1_C8EC2537CFD0A41F*>* _PamChatGreetings; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _FirstObtainAvatarIDs; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedMainMissionIDs; // 0x30
		::System::Boolean _IsGreetingTriggered; // 0x38
		::System::Boolean _IsDataReady; // 0x39
		::System::Boolean _IsForbidDataForTraining; // 0x3A
		::System::Boolean _IsTodayFirstLogin; // 0x3B
		::System::UInt32 _TouchCount_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdatePamChatInfo(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET))(this);
		}

		::System::Boolean IsQuestionerOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISQUESTIONEROPEN_OFFSET))(this);
		}

		::System::Boolean IsTodayFirstLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET))(this);
		}

		::System::Void SetTodayFirstLogin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET))(this, a1);
		}

		::System::Boolean IsGreetingTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET))(this);
		}

		::System::Void SetGreetingTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void AddHudBubbleTriggered(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET))(this, a1);
		}

		::System::Boolean HasOtherHubBubbleTriggered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET))(this, a1);
		}

		::System::Void ClearHudBubbleTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARHUDBUBBLETRIGGERED_OFFSET))(this);
		}

		::System::Void IncrementTouchCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_INCREMENTTOUCHCOUNT_OFFSET))(this);
		}

		::System::Void ResetTouchCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_RESETTOUCHCOUNT_OFFSET))(this);
		}

		::System::Void SendChatQuestProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SENDCHATQUESTPROGRESS_OFFSET))(this);
		}

		::System::Void TakeChatQuestReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_TAKECHATQUESTREWARD_OFFSET))(this);
		}

		::System::Boolean IsAllQuestClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISALLQUESTCLOSED_OFFSET))(this);
		}

		::System::UInt32 GetActivityEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETACTIVITYENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean IsForbidDataForTraining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET))(this);
		}

		::System::Void SetForbidDataForTraining(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET))(this, a1);
		}

		::System::Void AddFirstObtainAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET))(this, a1);
		}

		::System::Void ClearFirstObtainAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET))(this);
		}

		::System::Boolean HasFirstObtainAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET))(this, a1);
		}

		::System::Void AddFinishedMainMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDFINISHEDMAINMISSIONID_OFFSET))(this, a1);
		}

		::System::Boolean HasFinishedMainMissionID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASFINISHEDMAINMISSIONID_OFFSET))(this, a1);
		}

		::System::Void ClearFinishedMainMissionIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARFINISHEDMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Void ResetAllGreetingBubbleTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>* GetPamChatReportReasons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET))(this);
		}

		::Class_1_E7B9DD65288306D6* GetPamChatQuickFunction(::RPG::Client::PamChatQuickFunctionType a1)
		{
			return ((::Class_1_E7B9DD65288306D6*(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_C8EC2537CFD0A41F*>* GetPamChatGreetings()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C8EC2537CFD0A41F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETQUESTIDS_OFFSET))(this);
		}

		::System::Void _InitPamChatQuickFunctions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET))(this);
		}

		::System::Void _InitPamChatGreetings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::Boolean _IsInSchedule(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__ISINSCHEDULE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TouchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TouchCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SET_TOUCHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_ChatRewardQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_CHATREWARDQUEST_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_QuestionQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_QUESTIONQUEST_OFFSET))(this);
		}

		::System::UInt32 get__ChatRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET__CHATREWARDQUESTID_OFFSET))(this);
		}

		::System::UInt32 get__QuestionQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET__QUESTIONQUESTID_OFFSET))(this);
		}
	};
}
