#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimerManager; }
namespace System { class Action; }

#define RPG_CLIENT_TIMERMANAGER_TIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0x197B6830)
#define RPG_CLIENT_TIMERMANAGER_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197B6AC0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISREPEAT_OFFSET UNITYSDK_OFFSET(0x197B6CF0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISSTOPED_OFFSET UNITYSDK_OFFSET(0x197B6C90)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISTIMEOUT_OFFSET UNITYSDK_OFFSET(0x197B6D10)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_STARTSTAMP_OFFSET UNITYSDK_OFFSET(0x197B6CB0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_TIMESPAN_OFFSET UNITYSDK_OFFSET(0x197B6CD0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x197B6D30)
#define RPG_CLIENT_TIMERMANAGER_TIMER_ONNEW_OFFSET UNITYSDK_OFFSET(0x197B6EB0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x197B6E50)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x197B5C40)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISREPEAT_OFFSET UNITYSDK_OFFSET(0x197B6D00)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISSTOPED_OFFSET UNITYSDK_OFFSET(0x197B6CA0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_STARTSTAMP_OFFSET UNITYSDK_OFFSET(0x197B6CC0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_TIMESPAN_OFFSET UNITYSDK_OFFSET(0x197B6CE0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_TICK_OFFSET UNITYSDK_OFFSET(0x197B6620)
#define RPG_CLIENT_TIMERMANAGER_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x197B6D20)
#define RPG_CLIENT_TIMERMANAGER_TIMER__RESET_OFFSET UNITYSDK_OFFSET(0x197B6E10)

namespace RPG::Client
{
	inline static constexpr unsigned int TimerManager_Timer_TypeDefinitionIndex = 68281;

	class TimerManager_Timer : public ::System::Object
	{
	public:
		::RPG::Client::TimerManager* manager; // 0x10
		::System::Action* action; // 0x18
		::System::Boolean _IsRepeat_k__BackingField; // 0x20
		::System::Boolean _IsStoped_k__BackingField; // 0x21
		::System::Int32 TimerID; // 0x24
		::System::UInt64 StartMsTimeStamp; // 0x28
		::System::UInt64 LastTickMsTimeStamp; // 0x30
		::System::Single _StartStamp_k__BackingField; // 0x38
		::System::Single _TimeSpan_k__BackingField; // 0x3C
		::System::UInt64 FinishMsTimeStamp; // 0x40
		::System::UInt64 RepeatMsTimeSpan; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsStoped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISSTOPED_OFFSET))(this);
		}

		::System::Void set_IsStoped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISSTOPED_OFFSET))(this, a1);
		}

		::System::Single get_StartStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_STARTSTAMP_OFFSET))(this);
		}

		::System::Void set_StartStamp(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_STARTSTAMP_OFFSET))(this, a1);
		}

		::System::Single get_TimeSpan()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_TIMESPAN_OFFSET))(this);
		}

		::System::Void set_TimeSpan(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_TIMESPAN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISREPEAT_OFFSET))(this);
		}

		::System::Void set_IsRepeat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISREPEAT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTimeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISTIMEOUT_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_CANCEL_OFFSET))(this);
		}

		::System::Void setCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SETCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_INVOKE_OFFSET))(this);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER__RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_ONNEW_OFFSET))(this);
		}

		::System::Void Tick(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_TICK_OFFSET))(this, a1);
		}
	};
}
