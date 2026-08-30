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

#define RPG_CLIENT_SCHEDULEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF6AFB0)
#define RPG_CLIENT_SCHEDULEMODULE_GETCOMMUNITYACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AF69CD0)
#define RPG_CLIENT_SCHEDULEMODULE_GETEXISTEDSCHEDULETASK_OFFSET UNITYSDK_OFFSET(0x1AF6A910)
#define RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AF69C80)
#define RPG_CLIENT_SCHEDULEMODULE_GETSCHEDULEDATABYID_OFFSET UNITYSDK_OFFSET(0x1AF6B0F0)
#define RPG_CLIENT_SCHEDULEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AF6AEE0)
#define RPG_CLIENT_SCHEDULEMODULE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1AF6B350)
#define RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULEBYACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AF6B250)
#define RPG_CLIENT_SCHEDULEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF6B1F0)
#define RPG_CLIENT_SCHEDULEMODULE_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0x1AF6B2F0)
#define RPG_CLIENT_SCHEDULEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1AF69280)
#define RPG_CLIENT_SCHEDULEMODULE_REFRESHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF69BA0)
#define RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFORCLOSESCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF6A3B0)
#define RPG_CLIENT_SCHEDULEMODULE_REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF69E20)
#define RPG_CLIENT_SCHEDULEMODULE_REMOVEWAITFORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF6A480)
#define RPG_CLIENT_SCHEDULEMODULE__ADDACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AF69A90)
#define RPG_CLIENT_SCHEDULEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AF693D0)
#define RPG_CLIENT_SCHEDULEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AF692F0)
#define RPG_CLIENT_SCHEDULEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6ADC0)
#define RPG_CLIENT_SCHEDULEMODULE__DISPOSEACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF691E0)
#define RPG_CLIENT_SCHEDULEMODULE__DISPOSESCHEDULETASKS_OFFSET UNITYSDK_OFFSET(0x1AF6ACD0)
#define RPG_CLIENT_SCHEDULEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AF699D0)
#define RPG_CLIENT_SCHEDULEMODULE__GETORCREATESCHEDULETASK_OFFSET UNITYSDK_OFFSET(0x1AF69EF0)
#define RPG_CLIENT_SCHEDULEMODULE__INITACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF690A0)
#define RPG_CLIENT_SCHEDULEMODULE__ONCMDGETACTIVITYSCHEDULECONFIGSCRSP_OFFSET UNITYSDK_OFFSET(0x1AF694A0)
#define RPG_CLIENT_SCHEDULEMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0x1AF69B50)
#define RPG_CLIENT_SCHEDULEMODULE__ONSCHEDULETASKFINISH_OFFSET UNITYSDK_OFFSET(0x1AF6ABD0)
#define RPG_CLIENT_SCHEDULEMODULE__UNINITACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AF69150)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleModule_TypeDefinitionIndex = 67902;

	class ScheduleModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleData*>* _ScheduleDataDict; // 0x10
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ScheduleTask*>* _ScheduleTaskPool; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleData*>* _ActivityScheduleDataDict; // 0x20
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
	};
}
