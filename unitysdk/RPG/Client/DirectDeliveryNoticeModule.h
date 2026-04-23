#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_8789FE9A7EA728A4_4;
namespace RPG::Client { class DirectDeliveryNoticeData; }
namespace RPG::Client { class DirectDeliveryNoticeToastData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_CONFIRMTOASTINQUEUE_OFFSET UNITYSDK_OFFSET(0xA176510)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASEXPECTINGNOTICE_OFFSET UNITYSDK_OFFSET(0xA176370)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_1_OFFSET UNITYSDK_OFFSET(0xA176430)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_OFFSET UNITYSDK_OFFSET(0xA1763D0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA175DB0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA1762A0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_TRYSETNOTICESEEN_OFFSET UNITYSDK_OFFSET(0xA1765D0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_WAITFORDATAREADY_OFFSET UNITYSDK_OFFSET(0xA176330)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA175FE0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA1761F0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA177870)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__DOPENDNOTICE_OFFSET UNITYSDK_OFFSET(0xA177550)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__INITIALIZEEXPECTINGNOTICES_OFFSET UNITYSDK_OFFSET(0xA1771F0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONCANCELDIRECTDELIVERYNOTICESCRSP_OFFSET UNITYSDK_OFFSET(0xA177000)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONDIRECTDELIVERYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA176DB0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xA1768A0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xA176830)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xA176CE0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONUITOASTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA176910)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__PENDNOTICE_OFFSET UNITYSDK_OFFSET(0xA176EF0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRIGGERTRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xA176AC0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYCREATENOTICEDATA_OFFSET UNITYSDK_OFFSET(0xA176E50)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xA177750)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA1779B0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA177B00)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA177A40)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA177AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule_TypeDefinitionIndex = 58568;

	class DirectDeliveryNoticeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::DirectDeliveryNoticeData*>* _ToastingNotices; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DirectDeliveryNoticeData*>* _PendingNotices; // 0x18
		::RPG::Client::Promises::Promise* _WaitForActivityDataReady; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ExpectingNotices; // 0x28
		::RPG::Client::Promises::Promise* _WaitForQuestDataReady; // 0x30
		::RPG::Client::Promises::IPromise* _WaitForDataReady; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WaitForDataReady()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_WAITFORDATAREADY_OFFSET))(this);
		}

		::System::Boolean HasExpectingNotice(::System::UInt32 noticeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASEXPECTINGNOTICE_OFFSET))(this, noticeID);
		}

		::System::Boolean HasPendingNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_OFFSET))(this);
		}

		::System::Boolean HasPendingNotice_1(::System::UInt32 noticeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_1_OFFSET))(this, noticeID);
		}

		::System::Void ConfirmToastInQueue(::RPG::Client::DirectDeliveryNoticeToastData* toastData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_CONFIRMTOASTINQUEUE_OFFSET))(this, toastData);
		}

		::System::Void TrySetNoticeSeen(::RPG::Client::DirectDeliveryNoticeData* seenNotice)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_TRYSETNOTICESEEN_OFFSET))(this, seenNotice);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, o);
		}

		::System::Void _OnQuestUpdated(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONQUESTUPDATED_OFFSET))(this, o);
		}

		::System::Void _OnUIToastMainPage(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONUITOASTMAINPAGE_OFFSET))(this, o);
		}

		::System::Void _OnStoryModeChange(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSTORYMODECHANGE_OFFSET))(this, o);
		}

		::System::Void _OnDirectDeliveryScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONDIRECTDELIVERYSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCancelDirectDeliveryNoticeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONCANCELDIRECTDELIVERYNOTICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _InitializeExpectingNotices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__INITIALIZEEXPECTINGNOTICES_OFFSET))(this);
		}

		::RPG::Client::DirectDeliveryNoticeData* _TryCreateNoticeData(::Class_1_8789FE9A7EA728A4_4* serverData)
		{
			return ((::RPG::Client::DirectDeliveryNoticeData*(*)(::PVOID, ::Class_1_8789FE9A7EA728A4_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYCREATENOTICEDATA_OFFSET))(this, serverData);
		}

		::System::Void _PendNotice(::RPG::Client::DirectDeliveryNoticeData* pendingNotice)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__PENDNOTICE_OFFSET))(this, pendingNotice);
		}

		::System::Void _DoPendNotice(::RPG::Client::DirectDeliveryNoticeData* pendingNotice)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__DOPENDNOTICE_OFFSET))(this, pendingNotice);
		}

		::System::Void _TriggerTryEnqueueToast(::RPG::Client::DirectDeliveryNoticeData* notice)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRIGGERTRYENQUEUETOAST_OFFSET))(this, notice);
		}

		::System::Void _TryEnqueueToast(::RPG::Client::DirectDeliveryNoticeToastData* toast)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYENQUEUETOAST_OFFSET))(this, toast);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
