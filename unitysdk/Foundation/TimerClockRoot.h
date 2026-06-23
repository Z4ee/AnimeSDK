#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimerClock; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_TIMERCLOCKROOT_ADDLISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1E1A6DF0)
#define FOUNDATION_TIMERCLOCKROOT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E1A6F10)
#define FOUNDATION_TIMERCLOCKROOT_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x1E1A6D10)
#define FOUNDATION_TIMERCLOCKROOT_GETENGINETIME_OFFSET UNITYSDK_OFFSET(0x1E1A6D70)
#define FOUNDATION_TIMERCLOCKROOT_GET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1E1A6EF0)
#define FOUNDATION_TIMERCLOCKROOT_GET_PARENTTIMERCLOCK_OFFSET UNITYSDK_OFFSET(0x1E1A6DE0)
#define FOUNDATION_TIMERCLOCKROOT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1E1A6DD0)
#define FOUNDATION_TIMERCLOCKROOT_REMOVELISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1E1A6E40)
#define FOUNDATION_TIMERCLOCKROOT_SETPARENTCLOCK_OFFSET UNITYSDK_OFFSET(0x1E1A6CC0)
#define FOUNDATION_TIMERCLOCKROOT_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1E1A6E90)
#define FOUNDATION_TIMERCLOCKROOT_SET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1E1A6F00)
#define FOUNDATION_TIMERCLOCKROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A6F50)

namespace Foundation
{
	inline static constexpr unsigned int TimerClockRoot_TypeDefinitionIndex = 7756;

	class TimerClockRoot : public ::System::Object
	{
	public:
		::System::Action_1<::Foundation::ITimerClock*>* _E_OnChanged_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT__CTOR_OFFSET))(this);
		}

		::System::Void SetParentClock(::Foundation::ITimerClock* parentTimerClock)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ITimerClock*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_SETPARENTCLOCK_OFFSET))(this, parentTimerClock);
		}

		::System::Single GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_GETDELTATIME_OFFSET))(this);
		}

		::System::Single GetEngineTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_GETENGINETIME_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_GET_SPEED_OFFSET))(this);
		}

		::Foundation::ITimerClock* get_ParentTimerClock()
		{
			return ((::Foundation::ITimerClock*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_GET_PARENTTIMERCLOCK_OFFSET))(this);
		}

		::System::Void AddListenerSpeedChangedBefore(::System::Action_1<::Foundation::ITimerClock*>* onChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::ITimerClock*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_ADDLISTENERSPEEDCHANGEDBEFORE_OFFSET))(this, onChange);
		}

		::System::Void RemoveListenerSpeedChangedBefore(::System::Action_1<::Foundation::ITimerClock*>* onChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::ITimerClock*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_REMOVELISTENERSPEEDCHANGEDBEFORE_OFFSET))(this, onChange);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_SETSPEED_OFFSET))(this, speed);
		}

		::System::Action_1<::Foundation::ITimerClock*>* get_E_OnChanged()
		{
			return ((::System::Action_1<::Foundation::ITimerClock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_GET_E_ONCHANGED_OFFSET))(this);
		}

		::System::Void set_E_OnChanged(::System::Action_1<::Foundation::ITimerClock*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::ITimerClock*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_SET_E_ONCHANGED_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKROOT_DISPOSE_OFFSET))(this);
		}
	};
}
