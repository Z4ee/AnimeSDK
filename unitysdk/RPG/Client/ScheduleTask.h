#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SCHEDULETASK_CANCEL_OFFSET UNITYSDK_OFFSET(0xA41B280)
#define RPG_CLIENT_SCHEDULETASK_GET_ENABLERANDOMDELAY_OFFSET UNITYSDK_OFFSET(0xA41C4E0)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHACTION_OFFSET UNITYSDK_OFFSET(0xA41C500)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA41C4F0)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA41B360)
#define RPG_CLIENT_SCHEDULETASK_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA41C520)
#define RPG_CLIENT_SCHEDULETASK_INITRANDOMDELAY_OFFSET UNITYSDK_OFFSET(0xA41C270)
#define RPG_CLIENT_SCHEDULETASK_ISDONE_OFFSET UNITYSDK_OFFSET(0xA41C5A0)
#define RPG_CLIENT_SCHEDULETASK_ONNEW_OFFSET UNITYSDK_OFFSET(0xA41C4A0)
#define RPG_CLIENT_SCHEDULETASK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA41C330)
#define RPG_CLIENT_SCHEDULETASK_SET_ENABLERANDOMDELAY_OFFSET UNITYSDK_OFFSET(0xA41B590)
#define RPG_CLIENT_SCHEDULETASK_SET_FINISHACTION_OFFSET UNITYSDK_OFFSET(0xA41C510)
#define RPG_CLIENT_SCHEDULETASK_SET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA41B540)
#define RPG_CLIENT_SCHEDULETASK_SET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA41C530)
#define RPG_CLIENT_SCHEDULETASK_START_OFFSET UNITYSDK_OFFSET(0xA41AE20)
#define RPG_CLIENT_SCHEDULETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA41C5E0)
#define RPG_CLIENT_SCHEDULETASK__DONE_OFFSET UNITYSDK_OFFSET(0xA41C540)
#define RPG_CLIENT_SCHEDULETASK__RELEASETIMER_OFFSET UNITYSDK_OFFSET(0xA41C410)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleTask_TypeDefinitionIndex = 55405;

	class ScheduleTask : public ::System::Object
	{
	public:
		// static const ::System::Int32 _RANDOM_DELAY_MIN = 0x1F4; // 0x0
		// static const ::System::Int32 _RANDOM_DELAY_MAX = 0x7D0; // 0x0
		::System::Action_1<::RPG::Client::ScheduleTask*>* OnTaskFinish; // 0x10
		::System::Action_1<::RPG::Client::ScheduleData*>* _FinishAction; // 0x18
		::RPG::Client::ScheduleData* _ScheduleData; // 0x20
		::System::UInt32 _DelayMs; // 0x28
		::System::UInt64 _FinishMsTimeStamp; // 0x30
		::System::Boolean _IsDone; // 0x38
		::System::Int32 _TimerID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK__CTOR_OFFSET))(this);
		}

		::System::Void InitRandomDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_INITRANDOMDELAY_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_ONNEW_OFFSET))(this);
		}

		::System::Void set_FinishTimeStamp(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_FINISHTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt64 get_FinishTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_EnableRandomDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_ENABLERANDOMDELAY_OFFSET))(this);
		}

		::System::Void set_EnableRandomDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_ENABLERANDOMDELAY_OFFSET))(this, value);
		}

		::System::UInt64 get_FinishMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHMSTIMESTAMP_OFFSET))(this);
		}

		::System::Action_1<::RPG::Client::ScheduleData*>* get_FinishAction()
		{
			return ((::System::Action_1<::RPG::Client::ScheduleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHACTION_OFFSET))(this);
		}

		::System::Void set_FinishAction(::System::Action_1<::RPG::Client::ScheduleData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_FINISHACTION_OFFSET))(this, value);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_ScheduleData(::RPG::Client::ScheduleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_SCHEDULEDATA_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_START_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_CANCEL_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_ISDONE_OFFSET))(this);
		}

		::System::Void _Done()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK__DONE_OFFSET))(this);
		}

		::System::Void _ReleaseTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK__RELEASETIMER_OFFSET))(this);
		}
	};
}
