#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SCHEDULETASK_CANCEL_OFFSET UNITYSDK_OFFSET(0xC8A7B10)
#define RPG_CLIENT_SCHEDULETASK_GET_ENABLERANDOMDELAY_OFFSET UNITYSDK_OFFSET(0xC8A8A50)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHACTION_OFFSET UNITYSDK_OFFSET(0xC8A8A70)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC8A8A60)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC8A7BF0)
#define RPG_CLIENT_SCHEDULETASK_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC8A8A90)
#define RPG_CLIENT_SCHEDULETASK_INITRANDOMDELAY_OFFSET UNITYSDK_OFFSET(0xC8A87E0)
#define RPG_CLIENT_SCHEDULETASK_ISDONE_OFFSET UNITYSDK_OFFSET(0xC8A8B20)
#define RPG_CLIENT_SCHEDULETASK_ONNEW_OFFSET UNITYSDK_OFFSET(0xC8A8A10)
#define RPG_CLIENT_SCHEDULETASK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xC8A88A0)
#define RPG_CLIENT_SCHEDULETASK_SET_ENABLERANDOMDELAY_OFFSET UNITYSDK_OFFSET(0xC8A7E10)
#define RPG_CLIENT_SCHEDULETASK_SET_FINISHACTION_OFFSET UNITYSDK_OFFSET(0xC8A8A80)
#define RPG_CLIENT_SCHEDULETASK_SET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC8A7DC0)
#define RPG_CLIENT_SCHEDULETASK_SET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC8A8AA0)
#define RPG_CLIENT_SCHEDULETASK_START_OFFSET UNITYSDK_OFFSET(0xC8A7690)
#define RPG_CLIENT_SCHEDULETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A8B60)
#define RPG_CLIENT_SCHEDULETASK__DONE_OFFSET UNITYSDK_OFFSET(0xC8A8AB0)
#define RPG_CLIENT_SCHEDULETASK__RELEASETIMER_OFFSET UNITYSDK_OFFSET(0xC8A8980)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleTask_TypeDefinitionIndex = 63529;

	class ScheduleTask : public ::System::Object
	{
	public:
		// static const ::System::Int32 _RANDOM_DELAY_MIN = 0x1F4; // 0x0
		// static const ::System::Int32 _RANDOM_DELAY_MAX = 0x7D0; // 0x0
		::RPG::Client::ScheduleData* _ScheduleData; // 0x10
		::System::Action_1<::RPG::Client::ScheduleTask*>* OnTaskFinish; // 0x18
		::System::Action_1<::RPG::Client::ScheduleData*>* _FinishAction; // 0x20
		::System::Boolean _IsDone; // 0x28
		::System::UInt32 _DelayMs; // 0x2C
		::System::Int32 _TimerID; // 0x30
		::System::UInt64 _FinishMsTimeStamp; // 0x38

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

		::System::Void set_FinishTimeStamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_FINISHTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt64 get_FinishTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_EnableRandomDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_ENABLERANDOMDELAY_OFFSET))(this);
		}

		::System::Void set_EnableRandomDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_ENABLERANDOMDELAY_OFFSET))(this, a1);
		}

		::System::UInt64 get_FinishMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHMSTIMESTAMP_OFFSET))(this);
		}

		::System::Action_1<::RPG::Client::ScheduleData*>* get_FinishAction()
		{
			return ((::System::Action_1<::RPG::Client::ScheduleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHACTION_OFFSET))(this);
		}

		::System::Void set_FinishAction(::System::Action_1<::RPG::Client::ScheduleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_FINISHACTION_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_ScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_SCHEDULEDATA_OFFSET))(this, a1);
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
