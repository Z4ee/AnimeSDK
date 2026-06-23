#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TimerClock_EStateTag.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimerClock; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_TIMERCLOCK_ADDLISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1D8FD520)
#define FOUNDATION_TIMERCLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D8FD850)
#define FOUNDATION_TIMERCLOCK_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D8FD390)
#define FOUNDATION_TIMERCLOCK_GETENGINETIME_OFFSET UNITYSDK_OFFSET(0x1D8FD4C0)
#define FOUNDATION_TIMERCLOCK_GET_DEPENDENCECOUNT_OFFSET UNITYSDK_OFFSET(0x1D8FCC80)
#define FOUNDATION_TIMERCLOCK_GET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D8FCC90)
#define FOUNDATION_TIMERCLOCK_GET_PARENTTIMERCLOCK_OFFSET UNITYSDK_OFFSET(0x1D8FD510)
#define FOUNDATION_TIMERCLOCK_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1D8FD1E0)
#define FOUNDATION_TIMERCLOCK_ONSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1D8FD300)
#define FOUNDATION_TIMERCLOCK_REMOVELISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1D8FD5C0)
#define FOUNDATION_TIMERCLOCK_SETPARENTCLOCK_OFFSET UNITYSDK_OFFSET(0x1D8FCD90)
#define FOUNDATION_TIMERCLOCK_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1D8FD660)
#define FOUNDATION_TIMERCLOCK_SET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D8FCCA0)
#define FOUNDATION_TIMERCLOCK__CHECK_PARENT_VALID__OFFSET UNITYSDK_OFFSET(0x1D8FD710)
#define FOUNDATION_TIMERCLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FCCB0)
#define FOUNDATION_TIMERCLOCK__REFRESH_CURRENT__OFFSET UNITYSDK_OFFSET(0x1D8FD060)

namespace Foundation
{
	inline static constexpr unsigned int TimerClock_TypeDefinitionIndex = 8252;

	class TimerClock : public ::System::Object
	{
	public:
		::System::Action_1<::Foundation::ITimerClock*>* _E_OnChanged_k__BackingField; // 0x10
		::Foundation::ITimerClock* _parentTimerClock; // 0x18
		::System::Single _myEngineTime; // 0x20
		::System::Boolean isDisposed; // 0x24
		::System::Single _speed; // 0x28
		::System::Single _lastRefreshParentEngineTime; // 0x2C
		::Foundation::TimerClock_EStateTag ClockTag; // 0x30
		::System::Int32 _lastRefreshFrameCount; // 0x34
		::System::Int32 _dependenceCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DependenceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_GET_DEPENDENCECOUNT_OFFSET))(this);
		}

		::System::Action_1<::Foundation::ITimerClock*>* get_E_OnChanged()
		{
			return ((::System::Action_1<::Foundation::ITimerClock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_GET_E_ONCHANGED_OFFSET))(this);
		}

		::System::Void set_E_OnChanged(::System::Action_1<::Foundation::ITimerClock*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::ITimerClock*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_SET_E_ONCHANGED_OFFSET))(this, value);
		}

		::System::Void SetParentClock(::Foundation::ITimerClock* parentTimerClock)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ITimerClock*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_SETPARENTCLOCK_OFFSET))(this, parentTimerClock);
		}

		::System::Void _refresh_current_()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK__REFRESH_CURRENT__OFFSET))(this);
		}

		::System::Void OnSpeedChangedBefore(::Foundation::ITimerClock* timerClock)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ITimerClock*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_ONSPEEDCHANGEDBEFORE_OFFSET))(this, timerClock);
		}

		::System::Single GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_GETDELTATIME_OFFSET))(this);
		}

		::System::Single GetEngineTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_GETENGINETIME_OFFSET))(this);
		}

		::Foundation::ITimerClock* get_ParentTimerClock()
		{
			return ((::Foundation::ITimerClock*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_GET_PARENTTIMERCLOCK_OFFSET))(this);
		}

		::System::Void AddListenerSpeedChangedBefore(::System::Action_1<::Foundation::ITimerClock*>* onChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::ITimerClock*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_ADDLISTENERSPEEDCHANGEDBEFORE_OFFSET))(this, onChange);
		}

		::System::Void RemoveListenerSpeedChangedBefore(::System::Action_1<::Foundation::ITimerClock*>* onChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::ITimerClock*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_REMOVELISTENERSPEEDCHANGEDBEFORE_OFFSET))(this, onChange);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_SETSPEED_OFFSET))(this, speed);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_GET_SPEED_OFFSET))(this);
		}

		::System::Boolean _check_parent_valid_(::Foundation::ITimerClock* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ITimerClock*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK__CHECK_PARENT_VALID__OFFSET))(this, parent);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCK_DISPOSE_OFFSET))(this);
		}
	};
}
