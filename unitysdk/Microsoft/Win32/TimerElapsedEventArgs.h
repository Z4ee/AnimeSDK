#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_TIMERELAPSEDEVENTARGS_GET_TIMERID_OFFSET UNITYSDK_OFFSET(0x1AFD9730)
#define MICROSOFT_WIN32_TIMERELAPSEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD96F0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int TimerElapsedEventArgs_TypeDefinitionIndex = 4307;

	class TimerElapsedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::System::IntPtr timerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_TIMERELAPSEDEVENTARGS__CTOR_OFFSET))(this, timerId);
		}

		::System::IntPtr get_TimerId()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_TIMERELAPSEDEVENTARGS_GET_TIMERID_OFFSET))(this);
		}
	};
}
