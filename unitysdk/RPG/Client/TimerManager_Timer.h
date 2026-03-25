#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimerManager; }
namespace System { class Action; }

#define RPG_CLIENT_TIMERMANAGER_TIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0xA5DE600)
#define RPG_CLIENT_TIMERMANAGER_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5DE980)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISREPEAT_OFFSET UNITYSDK_OFFSET(0xA5DEBB0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISSTOPED_OFFSET UNITYSDK_OFFSET(0xA5DEB50)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA5DEBD0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_STARTSTAMP_OFFSET UNITYSDK_OFFSET(0xA5DEB70)
#define RPG_CLIENT_TIMERMANAGER_TIMER_GET_TIMESPAN_OFFSET UNITYSDK_OFFSET(0xA5DEB90)
#define RPG_CLIENT_TIMERMANAGER_TIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA5DEBF0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_ONNEW_OFFSET UNITYSDK_OFFSET(0xA5DED70)
#define RPG_CLIENT_TIMERMANAGER_TIMER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA5DED10)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5DDA90)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISREPEAT_OFFSET UNITYSDK_OFFSET(0xA5DEBC0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISSTOPED_OFFSET UNITYSDK_OFFSET(0xA5DEB60)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_STARTSTAMP_OFFSET UNITYSDK_OFFSET(0xA5DEB80)
#define RPG_CLIENT_TIMERMANAGER_TIMER_SET_TIMESPAN_OFFSET UNITYSDK_OFFSET(0xA5DEBA0)
#define RPG_CLIENT_TIMERMANAGER_TIMER_TICK_OFFSET UNITYSDK_OFFSET(0xA5DE440)
#define RPG_CLIENT_TIMERMANAGER_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DEBE0)
#define RPG_CLIENT_TIMERMANAGER_TIMER__RESET_OFFSET UNITYSDK_OFFSET(0xA5DECD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimerManager_Timer_TypeDefinitionIndex = 55760;

	class TimerManager_Timer : public ::System::Object
	{
	public:
		::RPG::Client::TimerManager* manager; // 0x10
		::System::Action* action; // 0x18
		::System::Single _StartStamp_k__BackingField; // 0x20
		::System::Single _TimeSpan_k__BackingField; // 0x24
		::System::UInt64 RepeatMsTimeSpan; // 0x28
		::System::UInt64 LastTickMsTimeStamp; // 0x30
		::System::UInt64 FinishMsTimeStamp; // 0x38
		::System::Int32 TimerID; // 0x40
		::System::Boolean _IsRepeat_k__BackingField; // 0x44
		::System::Boolean _IsStoped_k__BackingField; // 0x45
		::System::UInt64 StartMsTimeStamp; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsStoped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISSTOPED_OFFSET))(this);
		}

		::System::Void set_IsStoped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISSTOPED_OFFSET))(this, value);
		}

		::System::Single get_StartStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_STARTSTAMP_OFFSET))(this);
		}

		::System::Void set_StartStamp(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_STARTSTAMP_OFFSET))(this, value);
		}

		::System::Single get_TimeSpan()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_TIMESPAN_OFFSET))(this);
		}

		::System::Void set_TimeSpan(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_TIMESPAN_OFFSET))(this, value);
		}

		::System::Boolean get_IsRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISREPEAT_OFFSET))(this);
		}

		::System::Void set_IsRepeat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SET_ISREPEAT_OFFSET))(this, value);
		}

		::System::Boolean get_IsTimeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_GET_ISTIMEOUT_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_CANCEL_OFFSET))(this);
		}

		::System::Void setCallback(::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_SETCALLBACK_OFFSET))(this, call);
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

		::System::Void Tick(::System::UInt64 nowMsTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TIMER_TICK_OFFSET))(this, nowMsTimeStamp);
		}
	};
}
