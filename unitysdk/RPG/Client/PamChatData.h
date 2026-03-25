#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F75F8CAAFB46C9E;
class Class_1_7CC98C6000D59BCE;
namespace RPG::Client { class ChatReportReason; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0x9EC61C0)
#define RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9EC5EE0)
#define RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9EC6240)
#define RPG_CLIENT_PAMCHATDATA_CLEARHUDBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9EC6080)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0x9EC6900)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x9EC6640)
#define RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET UNITYSDK_OFFSET(0x9EC6490)
#define RPG_CLIENT_PAMCHATDATA_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9EC6BB0)
#define RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET UNITYSDK_OFFSET(0x9EC62B0)
#define RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9EC5F60)
#define RPG_CLIENT_PAMCHATDATA_INCREMENTTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9EC60F0)
#define RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9EC5C30)
#define RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0x9EC6180)
#define RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9EC5E50)
#define RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9EC5C70)
#define RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0x9EC5E10)
#define RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9EC6310)
#define RPG_CLIENT_PAMCHATDATA_RESETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9EC6130)
#define RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET UNITYSDK_OFFSET(0x9EC5BE0)
#define RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9EC5E90)
#define RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET UNITYSDK_OFFSET(0x9EC5B90)
#define RPG_CLIENT_PAMCHATDATA_SET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x9EC6BC0)
#define RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET UNITYSDK_OFFSET(0x9EC5AD0)
#define RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC5A30)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET UNITYSDK_OFFSET(0x9EC6960)
#define RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x9EC6740)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData_TypeDefinitionIndex = 51353;

	class PamChatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7CC98C6000D59BCE*>* _PamChatQuickFunctions; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _HudBubbleTriggeredIDs; // 0x18
		::System::Collections::Generic::List_1<::Class_1_3F75F8CAAFB46C9E*>* _PamChatGreetings; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _FirstObtainAvatarIDs; // 0x28
		::System::UInt32 _TouchCount_k__BackingField; // 0x30
		::System::Boolean _IsTodayFirstLogin; // 0x34
		::System::Boolean _IsDataReady; // 0x35
		::System::Boolean _IsForbidDataForTraining; // 0x36
		::System::Boolean _IsGreetingTriggered; // 0x37

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdatePamChatInfo(::System::Boolean isTodayFirstLogin, ::System::Boolean isForbidDataForTraining)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_UPDATEPAMCHATINFO_OFFSET))(this, isTodayFirstLogin, isForbidDataForTraining);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISOPEN_OFFSET))(this);
		}

		::System::Boolean IsTodayFirstLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISTODAYFIRSTLOGIN_OFFSET))(this);
		}

		::System::Void SetTodayFirstLogin(::System::Boolean isTodayFirstLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETTODAYFIRSTLOGIN_OFFSET))(this, isTodayFirstLogin);
		}

		::System::Boolean IsGreetingTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISGREETINGTRIGGERED_OFFSET))(this);
		}

		::System::Void SetGreetingTriggered(::System::Boolean triggered)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETGREETINGTRIGGERED_OFFSET))(this, triggered);
		}

		::System::Void AddHudBubbleTriggered(::System::UInt32 greetingID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDHUDBUBBLETRIGGERED_OFFSET))(this, greetingID);
		}

		::System::Boolean HasOtherHubBubbleTriggered(::System::UInt32 greetingID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASOTHERHUBBUBBLETRIGGERED_OFFSET))(this, greetingID);
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

		::System::Boolean IsForbidDataForTraining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ISFORBIDDATAFORTRAINING_OFFSET))(this);
		}

		::System::Void SetForbidDataForTraining(::System::Boolean forbid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SETFORBIDDATAFORTRAINING_OFFSET))(this, forbid);
		}

		::System::Void AddFirstObtainAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_ADDFIRSTOBTAINAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void ClearFirstObtainAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_CLEARFIRSTOBTAINAVATARIDS_OFFSET))(this);
		}

		::System::Boolean HasFirstObtainAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_HASFIRSTOBTAINAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void ResetAllGreetingBubbleTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_RESETALLGREETINGBUBBLETRIGGERED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>* GetPamChatReportReasons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatReportReason*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATREPORTREASONS_OFFSET))(this);
		}

		::Class_1_7CC98C6000D59BCE* GetPamChatQuickFunction(::RPG::Client::PamChatQuickFunctionType type)
		{
			return ((::Class_1_7CC98C6000D59BCE*(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATQUICKFUNCTION_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::Class_1_3F75F8CAAFB46C9E*>* GetPamChatGreetings()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3F75F8CAAFB46C9E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GETPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::Void _InitPamChatQuickFunctions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATQUICKFUNCTIONS_OFFSET))(this);
		}

		::System::Void _InitPamChatGreetings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA__INITPAMCHATGREETINGS_OFFSET))(this);
		}

		::System::UInt32 get_TouchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TouchCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA_SET_TOUCHCOUNT_OFFSET))(this, value);
		}
	};
}
