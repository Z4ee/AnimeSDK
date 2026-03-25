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

#define RPG_CLIENT_SCHEDULEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA41B9C0)
#define RPG_CLIENT_SCHEDULEMODULE_GETCOMMUNITYACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA41A980)
#define RPG_CLIENT_SCHEDULEMODULE_GETEXISTEDSCHEDULETASK_OFFSET UNITYSDK_OFFSET(0xA41B3C0)
#define RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xA41A930)
#define RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYID_OFFSET UNITYSDK_OFFSET(0xA41BB20)
#define RPG_CLIENT_SCHEDULEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA41B8A0)
#define RPG_CLIENT_SCHEDULEMODULE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA41BF70)
#define RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULEBYACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xA41BD90)
#define RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA41BC50)
#define RPG_CLIENT_SCHEDULEMODULE_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0xA41BE30)
#define RPG_CLIENT_SCHEDULEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA41A0B0)
#define RPG_CLIENT_SCHEDULEMODULE_REFRESHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA41A850)
#define RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFORCLOSESCHEDULE_OFFSET UNITYSDK_OFFSET(0xA41AFA0)
#define RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA41AAD0)
#define RPG_CLIENT_SCHEDULEMODULE_REMOVEWAITFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA41B070)
#define RPG_CLIENT_SCHEDULEMODULE__ADDACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA41A700)
#define RPG_CLIENT_SCHEDULEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA41A190)
#define RPG_CLIENT_SCHEDULEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA41A120)
#define RPG_CLIENT_SCHEDULEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA41B780)
#define RPG_CLIENT_SCHEDULEMODULE__DISPOSEACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA41A000)
#define RPG_CLIENT_SCHEDULEMODULE__DISPOSESCHEDULETASKS_OFFSET UNITYSDK_OFFSET(0xA41B680)
#define RPG_CLIENT_SCHEDULEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA41A650)
#define RPG_CLIENT_SCHEDULEMODULE__GETORCREATESCHEDULETASK_OFFSET UNITYSDK_OFFSET(0xA41ABA0)
#define RPG_CLIENT_SCHEDULEMODULE__INITACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA419EB0)
#define RPG_CLIENT_SCHEDULEMODULE__ONCMDGETACTIVITYSCHEDULECONFIGSCRSP_OFFSET UNITYSDK_OFFSET(0xA41A240)
#define RPG_CLIENT_SCHEDULEMODULE__ONPLAYERDAILYREFRESH_OFFSET UNITYSDK_OFFSET(0xA41A800)
#define RPG_CLIENT_SCHEDULEMODULE__ONSCHEDULETASKFINISH_OFFSET UNITYSDK_OFFSET(0xA41B5F0)
#define RPG_CLIENT_SCHEDULEMODULE__UNINITACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA419F60)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA41C260)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA41C1D0)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA41C0B0)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA41C170)
#define RPG_CLIENT_SCHEDULEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA41C110)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleModule_TypeDefinitionIndex = 55404;

	class ScheduleModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ScheduleTask*>* _ScheduleTaskPool; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleData*>* _ActivityScheduleDataDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleData*>* _ScheduleDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::System::UInt64, ::System::Action_1<::RPG::Client::ScheduleData*>*>, ::RPG::Client::ScheduleTask*>* _ExistedScheduleTasks; // 0x28
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

		::System::Void _OnCmdGetActivityScheduleConfigScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ONCMDGETACTIVITYSCHEDULECONFIGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayerDailyRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ONPLAYERDAILYREFRESH_OFFSET))(this, arg);
		}

		::RPG::Client::ScheduleData* GetScheduleDataByActivityModuleID(::System::UInt32 activityModuleID)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYACTIVITYMODULEID_OFFSET))(this, activityModuleID);
		}

		::RPG::Client::ScheduleData* GetCommunityActivityScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETCOMMUNITYACTIVITYSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void RefreshActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REFRESHACTIVITYSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetActivityScheduleData(::System::UInt32 moduleID)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET))(this, moduleID);
		}

		::System::Void _AddActivityScheduleData(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ADDACTIVITYSCHEDULEDATA_OFFSET))(this, scheduleData);
		}

		::RPG::Client::ScheduleTask* RegisterWaitForOpenSchedule(::RPG::Client::ScheduleData* data, ::System::Action_1<::RPG::Client::ScheduleData*>* callback, ::System::Boolean randomDelay)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFOROPENSCHEDULE_OFFSET))(this, data, callback, randomDelay);
		}

		::RPG::Client::ScheduleTask* RegisterWaitForCloseSchedule(::RPG::Client::ScheduleData* data, ::System::Action_1<::RPG::Client::ScheduleData*>* callback, ::System::Boolean randomDelay)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFORCLOSESCHEDULE_OFFSET))(this, data, callback, randomDelay);
		}

		::System::Void RemoveWaitForSchedule(::RPG::Client::ScheduleTask* task)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_REMOVEWAITFORSCHEDULE_OFFSET))(this, task);
		}

		::RPG::Client::ScheduleTask* GetExistedScheduleTask(::RPG::Client::ScheduleData* data, ::System::UInt64 finishTimeStamp, ::System::Action_1<::RPG::Client::ScheduleData*>* callback)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::UInt64, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETEXISTEDSCHEDULETASK_OFFSET))(this, data, finishTimeStamp, callback);
		}

		::RPG::Client::ScheduleTask* _GetOrCreateScheduleTask(::RPG::Client::ScheduleData* scheduleData, ::System::UInt32 endTimeStamp, ::System::Action_1<::RPG::Client::ScheduleData*>* callback, ::System::Boolean randomDelay)
		{
			return ((::RPG::Client::ScheduleTask*(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::UInt32, ::System::Action_1<::RPG::Client::ScheduleData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__GETORCREATESCHEDULETASK_OFFSET))(this, scheduleData, endTimeStamp, callback, randomDelay);
		}

		::System::Void _OnScheduleTaskFinish(::RPG::Client::ScheduleTask* scheduleTask)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE__ONSCHEDULETASKFINISH_OFFSET))(this, scheduleTask);
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

		::RPG::Client::ScheduleData* GetScheduleDataByID(::System::UInt32 scheduleDataID)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYID_OFFSET))(this, scheduleDataID);
		}

		::System::Boolean IsInSchedule(::System::UInt32 scheduleDataID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULE_OFFSET))(this, scheduleDataID);
		}

		::System::Boolean IsInScheduleByActivityModuleID(::System::UInt32 activityModuleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULEBYACTIVITYMODULEID_OFFSET))(this, activityModuleID);
		}

		::System::Boolean IsNotStart(::System::UInt32 scheduleDataID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISNOTSTART_OFFSET))(this, scheduleDataID);
		}

		::System::Boolean IsExpired(::System::UInt32 scheduleDataID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMODULE_ISEXPIRED_OFFSET))(this, scheduleDataID);
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
