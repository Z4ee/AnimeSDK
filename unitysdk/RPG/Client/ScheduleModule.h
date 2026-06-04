#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_SCHEDULEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8A8230)
#define RPG_CLIENT_SCHEDULEMODULE_GETCOMMUNITYACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC8A71C0)
#define RPG_CLIENT_SCHEDULEMODULE_GETEXISTEDSCHEDULETASK_OFFSET UNITYSDK_OFFSET(0xC8A7C50)
#define RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC8A7170)
#define RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYID_OFFSET UNITYSDK_OFFSET(0xC8A8370)
#define RPG_CLIENT_SCHEDULEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC8A8110)
#define RPG_CLIENT_SCHEDULEMODULE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC8A85D0)
#define RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULEBYACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC8A84D0)
#define RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A8470)
#define RPG_CLIENT_SCHEDULEMODULE_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0xC8A8570)
#define RPG_CLIENT_SCHEDULEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC8A68B0)
#define RPG_CLIENT_SCHEDULEMODULE_REFRESHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A7090)
#define RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFORCLOSESCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A7830)
#define RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A7310)
#define RPG_CLIENT_SCHEDULEMODULE_REMOVEWAITFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A7900)
#define RPG_CLIENT_SCHEDULEMODULE__ADDACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC8A6F80)
#define RPG_CLIENT_SCHEDULEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8A6A00)
#define RPG_CLIENT_SCHEDULEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8A6920)
#define RPG_CLIENT_SCHEDULEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A7FF0)
#define RPG_CLIENT_SCHEDULEMODULE__DISPOSEACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A6810)
#define RPG_CLIENT_SCHEDULEMODULE__DISPOSESCHEDULETASKS_OFFSET UNITYSDK_OFFSET(0xC8A7F00)
#define RPG_CLIENT_SCHEDULEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC8A6EC0)
#define RPG_CLIENT_SCHEDULEMODULE__GETORCREATESCHEDULETASK_OFFSET UNITYSDK_OFFSET(0xC8A73E0)
#define RPG_CLIENT_SCHEDULEMODULE__INITACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A66D0)
#define RPG_CLIENT_SCHEDULEMODULE__ONCMDGETACTIVITYSCHEDULECONFIGSCRSP_OFFSET UNITYSDK_OFFSET(0xC8A6AD0)
#define RPG_CLIENT_SCHEDULEMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0xC8A7040)
#define RPG_CLIENT_SCHEDULEMODULE__ONSCHEDULETASKFINISH_OFFSET UNITYSDK_OFFSET(0xC8A7E70)
#define RPG_CLIENT_SCHEDULEMODULE__UNINITACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8A6780)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8A87D0)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC8A8750)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC8A8630)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8A86F0)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8A8690)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleModule_TypeDefinitionIndex = 63528;

	class ScheduleModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::System::UInt64, ::System::Action_1<::RPG::Client::ScheduleData*>*>, ::RPG::Client::ScheduleTask*>* _ExistedScheduleTasks; // 0x10
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ScheduleTask*>* _ScheduleTaskPool; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleData*>* _ActivityScheduleDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleData*>* _ScheduleDataDict; // 0x28
		::System::Boolean IsScheduleDataLoaded; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _InitActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__INITACTIVITYSCHEDULE_OFFSET))(this);
		}

		::System::Void _UnInitActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__UNINITACTIVITYSCHEDULE_OFFSET))(this);
		}

		::System::Void _DisposeActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__DISPOSEACTIVITYSCHEDULE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetActivityScheduleConfigScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ONCMDGETACTIVITYSCHEDULECONFIGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ONPLAYERDAILYREFRESHING_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetScheduleDataByActivityModuleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetCommunityActivityScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETCOMMUNITYACTIVITYSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void RefreshActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REFRESHACTIVITYSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetActivityScheduleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET))(this, a1);
		}

		::System::Void _AddActivityScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ADDACTIVITYSCHEDULEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleTask* RegisterWaitForOpenSchedule(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFOROPENSCHEDULE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ScheduleTask* RegisterWaitForCloseSchedule(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFORCLOSESCHEDULE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveWaitForSchedule(::RPG::Client::ScheduleTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REMOVEWAITFORSCHEDULE_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleTask* GetExistedScheduleTask(::RPG::Client::ScheduleData* a1, ::System::UInt64 a2, ::System::Action_1<::RPG::Client::ScheduleData*>* a3)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::UInt64, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETEXISTEDSCHEDULETASK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ScheduleTask* _GetOrCreateScheduleTask(::RPG::Client::ScheduleData* a1, ::System::UInt32 a2, ::System::Action_1<::RPG::Client::ScheduleData*>* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::UInt32, ::System::Action_1<::RPG::Client::ScheduleData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__GETORCREATESCHEDULETASK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnScheduleTaskFinish(::RPG::Client::ScheduleTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ONSCHEDULETASKFINISH_OFFSET))(this, a1);
		}

		::System::Void _DisposeScheduleTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__DISPOSESCHEDULETASKS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* GetScheduleDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYID_OFFSET))(this, a1);
		}

		::System::Boolean IsInSchedule(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULE_OFFSET))(this, a1);
		}

		::System::Boolean IsInScheduleByActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULEBYACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::Boolean IsNotStart(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISNOTSTART_OFFSET))(this, a1);
		}

		::System::Boolean IsExpired(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISEXPIRED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
