#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

namespace Foundation { class ITimerClock; }

#define FOUNDATION_TIMERCLOCKMANAGER_GET_TIMERCLOCKROOT_OFFSET UNITYSDK_OFFSET(0x1E1EE8F0)
#define FOUNDATION_TIMERCLOCKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EE970)

namespace Foundation
{
	inline static constexpr unsigned int TimerClockManager_TypeDefinitionIndex = 7939;

	class TimerClockManager : public ::Foundation::Singleton_1<::Foundation::TimerClockManager*>
	{
	public:
		::Foundation::ITimerClock* _timerClockRoot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKMANAGER__CTOR_OFFSET))(this);
		}

		::Foundation::ITimerClock* get_TimerClockRoot()
		{
			return ((::Foundation::ITimerClock*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMERCLOCKMANAGER_GET_TIMERCLOCKROOT_OFFSET))(this);
		}
	};
}
