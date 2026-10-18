#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_A441F6291F816E17;
namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHOOSEDELIVERYMODULE_CHOOSEDELIVERY_OFFSET UNITYSDK_OFFSET(0xCB701C0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_CONFIRMTOASTINQUEUE_OFFSET UNITYSDK_OFFSET(0xCB6FF10)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB6E950)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_GETENTRY_OFFSET UNITYSDK_OFFSET(0xCB70040)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_ISENTRYCLOSED_OFFSET UNITYSDK_OFFSET(0xCB6EB80)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_ISENTRYSEEN_OFFSET UNITYSDK_OFFSET(0xCB703F0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_ISINPENDINGLIST_OFFSET UNITYSDK_OFFSET(0xCB6FE10)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_MARKTOASTSEEN_OFFSET UNITYSDK_OFFSET(0xCB700C0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xCB6E190)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCB6EDE0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xCB6E0B0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCB6E9A0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCB6EC50)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__CLEARWAITOPENSCHEDULETASKS_OFFSET UNITYSDK_OFFSET(0xCB6E7C0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB704F0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__DOENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xCB6FBE0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__DOPENDNOTICE_OFFSET UNITYSDK_OFFSET(0xCB6F800)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__INITEXPECTINGCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0xCB6E1E0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ONCHOOSEDELIVERYGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xCB6F400)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ONCHOOSEDELIVERYSCRSP_OFFSET UNITYSDK_OFFSET(0xCB6F9B0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xCB6EE70)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xCB6F330)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__ONUITOASTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCB6EF60)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xCB6E520)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE__TRYENQUEUETOAST_OFFSET UNITYSDK_OFFSET(0xCB6F100)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___REGISTERWAITFOROPENSCHEDULE_B__9_0_OFFSET UNITYSDK_OFFSET(0xCB70740)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryModule_TypeDefinitionIndex = 63522;

	class ChooseDeliveryModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::ChooseDeliveryEntry*>* _ToastingNoticeList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryEntry*>* _PendingNoticeList; // 0x18
		::Class_1_A441F6291F816E17* _Repository; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _WaitOpenScheduleTasks; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ExpectingUnlockIDList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ExpectingModuleIDList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SendGetDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_SENDGETDATAREQUEST_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void _InitExpectingConditionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__INITEXPECTINGCONDITIONLIST_OFFSET))(this);
		}

		::System::Void _RegisterWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__REGISTERWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::Void _ClearWaitOpenScheduleTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__CLEARWAITOPENSCHEDULETASKS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsEntryClosed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_ISENTRYCLOSED_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnUIToastMainPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ONUITOASTMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnChooseDeliveryGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ONCHOOSEDELIVERYGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChooseDeliveryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__ONCHOOSEDELIVERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _DoPendNotice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__DOPENDNOTICE_OFFSET))(this, a1);
		}

		::System::Void _TryEnqueueToast(::RPG::Client::ChooseDeliveryEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__TRYENQUEUETOAST_OFFSET))(this, a1);
		}

		::System::Void _DoEnqueueToast(::RPG::Client::ChooseDeliveryEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE__DOENQUEUETOAST_OFFSET))(this, a1);
		}

		::System::Void ConfirmToastInQueue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_CONFIRMTOASTINQUEUE_OFFSET))(this, a1);
		}

		::System::Void MarkToastSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_MARKTOASTSEEN_OFFSET))(this, a1);
		}

		::System::Void ChooseDelivery(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_CHOOSEDELIVERY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInPendingList(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_ISINPENDINGLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsEntrySeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_ISENTRYSEEN_OFFSET))(this, a1);
		}

		::RPG::Client::ChooseDeliveryEntry* GetEntry(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChooseDeliveryEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE_GETENTRY_OFFSET))(this, a1);
		}

		::System::Void __RegisterWaitForOpenSchedule_b__9_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___REGISTERWAITFOROPENSCHEDULE_B__9_0_OFFSET))(this, a1);
		}
	};
}
