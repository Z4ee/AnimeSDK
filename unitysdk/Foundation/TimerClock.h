#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TimerClock_EStateTag.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimerClock; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_TIMERCLOCK_ADDLISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1E9C2B40)
#define FOUNDATION_TIMERCLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E9C2E80)
#define FOUNDATION_TIMERCLOCK_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x1E9C29B0)
#define FOUNDATION_TIMERCLOCK_GETENGINETIME_OFFSET UNITYSDK_OFFSET(0x1E9C2AE0)
#define FOUNDATION_TIMERCLOCK_GET_DEPENDENCECOUNT_OFFSET UNITYSDK_OFFSET(0x1E9C2290)
#define FOUNDATION_TIMERCLOCK_GET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1E9C22A0)
#define FOUNDATION_TIMERCLOCK_GET_PARENTTIMERCLOCK_OFFSET UNITYSDK_OFFSET(0x1E9C2B30)
#define FOUNDATION_TIMERCLOCK_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1E9C2800)
#define FOUNDATION_TIMERCLOCK_ONSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1E9C2920)
#define FOUNDATION_TIMERCLOCK_REMOVELISTENERSPEEDCHANGEDBEFORE_OFFSET UNITYSDK_OFFSET(0x1E9C2BE0)
#define FOUNDATION_TIMERCLOCK_SETPARENTCLOCK_OFFSET UNITYSDK_OFFSET(0x1E9C23A0)
#define FOUNDATION_TIMERCLOCK_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1E9C2C80)
#define FOUNDATION_TIMERCLOCK_SET_E_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1E9C22B0)
#define FOUNDATION_TIMERCLOCK__CHECK_PARENT_VALID__OFFSET UNITYSDK_OFFSET(0x1E9C2D30)
#define FOUNDATION_TIMERCLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C22C0)
#define FOUNDATION_TIMERCLOCK__REFRESH_CURRENT__OFFSET UNITYSDK_OFFSET(0x1E9C2680)

namespace Foundation
{
	inline static constexpr unsigned int TimerClock_TypeDefinitionIndex = 8229;

	class TimerClock : public ::System::Object
	{
	public:
		::Foundation::ITimerClock* _parentTimerClock; // 0x10
		::System::Action_1<::Foundation::ITimerClock*>* _E_OnChanged_k__BackingField; // 0x18
		::System::Single _speed; // 0x20
		::System::Boolean isDisposed; // 0x24
		::System::Single _lastRefreshParentEngineTime; // 0x28
		::System::Int32 _lastRefreshFrameCount; // 0x2C
		::Foundation::TimerClock_EStateTag ClockTag; // 0x30
		::System::Single _myEngineTime; // 0x34
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
