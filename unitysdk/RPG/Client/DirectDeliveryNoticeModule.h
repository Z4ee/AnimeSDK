#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_8789FE9A7EA728A4_2;
namespace RPG::Client { class DirectDeliveryNoticeData; }
namespace RPG::Client { class DirectDeliveryNoticeToastData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_CONFIRMTOASTINQUEUE_OFFSET UNITYSDK_OFFSET(0xB7F4F90)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASEXPECTINGNOTICE_OFFSET UNITYSDK_OFFSET(0xB7F4DE0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_1_OFFSET UNITYSDK_OFFSET(0xB7F4EA0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_OFFSET UNITYSDK_OFFSET(0xB7F4E40)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB7F4720)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB7F4D10)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_TRYSETNOTICESEEN_OFFSET UNITYSDK_OFFSET(0xB7F5050)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_WAITFORDATAREADY_OFFSET UNITYSDK_OFFSET(0xB7F4DA0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7F4920)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7F4B80)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F63B0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__DOPENDNOTICE_OFFSET UNITYSDK_OFFSET(0xB7F6030)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__INITIALIZEEXPECTINGNOTICES_OFFSET UNITYSDK_OFFSET(0xB7F5C50)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONCANCELDIRECTDELIVERYNOTICESCRSP_OFFSET UNITYSDK_OFFSET(0xB7F5A40)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONDIRECTDELIVERYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB7F57D0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xB7F5320)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xB7F52B0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xB7F5700)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONUITOASTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB7F5390)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__PENDNOTICE_OFFSET UNITYSDK_OFFSET(0xB7F5910)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRIGGERTRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xB7F54D0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYCREATENOTICEDATA_OFFSET UNITYSDK_OFFSET(0xB7F5870)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xB7F6290)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB7F64F0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB7F6630)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7F6570)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7F65D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule_TypeDefinitionIndex = 59498;

	class DirectDeliveryNoticeModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _WaitForActivityDataReady; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::DirectDeliveryNoticeData*>* _ToastingNotices; // 0x18
		::RPG::Client::Promises::IPromise* _WaitForDataReady; // 0x20
		::RPG::Client::Promises::Promise* _WaitForQuestDataReady; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DirectDeliveryNoticeData*>* _PendingNotices; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ExpectingNotices; // 0x38

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

		::System::Boolean HasExpectingNotice(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASEXPECTINGNOTICE_OFFSET))(this, a1);
		}

		::System::Boolean HasPendingNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_OFFSET))(this);
		}

		::System::Boolean HasPendingNotice_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_HASPENDINGNOTICE_1_OFFSET))(this, a1);
		}

		::System::Void ConfirmToastInQueue(::RPG::Client::DirectDeliveryNoticeToastData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_CONFIRMTOASTINQUEUE_OFFSET))(this, a1);
		}

		::System::Void TrySetNoticeSeen(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE_TRYSETNOTICESEEN_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONQUESTUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnUIToastMainPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONUITOASTMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnDirectDeliveryScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONDIRECTDELIVERYSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCancelDirectDeliveryNoticeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__ONCANCELDIRECTDELIVERYNOTICESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitializeExpectingNotices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__INITIALIZEEXPECTINGNOTICES_OFFSET))(this);
		}

		::RPG::Client::DirectDeliveryNoticeData* _TryCreateNoticeData(::Class_1_8789FE9A7EA728A4_2* a1)
		{
			return ((::RPG::Client::DirectDeliveryNoticeData*(*)(::PVOID, ::Class_1_8789FE9A7EA728A4_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYCREATENOTICEDATA_OFFSET))(this, a1);
		}

		::System::Void _PendNotice(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__PENDNOTICE_OFFSET))(this, a1);
		}

		::System::Void _DoPendNotice(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__DOPENDNOTICE_OFFSET))(this, a1);
		}

		::System::Void _TriggerTryEnqueueToast(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRIGGERTRYENQUEUETOAST_OFFSET))(this, a1);
		}

		::System::Void _TryEnqueueToast(::RPG::Client::DirectDeliveryNoticeToastData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE__TRYENQUEUETOAST_OFFSET))(this, a1);
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
