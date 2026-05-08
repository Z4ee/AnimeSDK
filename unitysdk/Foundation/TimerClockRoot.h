#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimerClock; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_TIMERCLOCKROOT_ADDLISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1BE58520)
#define FOUNDATION_TIMERCLOCKROOT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE58640)
#define FOUNDATION_TIMERCLOCKROOT_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x1BE58440)
#define FOUNDATION_TIMERCLOCKROOT_GETENGINETIME_OFFSET UNITYSDK_OFFSET(0x1BE584A0)
#define FOUNDATION_TIMERCLOCKROOT_GET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1BE58620)
#define FOUNDATION_TIMERCLOCKROOT_GET_PARENTTIMERCLOCK_OFFSET UNITYSDK_OFFSET(0x1BE58510)
#define FOUNDATION_TIMERCLOCKROOT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1BE58500)
#define FOUNDATION_TIMERCLOCKROOT_REMOVELISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1BE58570)
#define FOUNDATION_TIMERCLOCKROOT_SETPARENTCLOCK_OFFSET UNITYSDK_OFFSET(0x1BE583F0)
#define FOUNDATION_TIMERCLOCKROOT_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1BE585C0)
#define FOUNDATION_TIMERCLOCKROOT_SET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1BE58630)
#define FOUNDATION_TIMERCLOCKROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE58680)

namespace Foundation
{
	inline static constexpr unsigned int TimerClockRoot_TypeDefinitionIndex = 7787;

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
