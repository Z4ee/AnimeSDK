#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SessionSwitchReason.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_SESSIONSWITCHEVENTARGS_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1C003300)
#define MICROSOFT_WIN32_SESSIONSWITCHEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0032C0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionSwitchEventArgs_TypeDefinitionIndex = 4301;

	class SessionSwitchEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::SessionSwitchReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SessionSwitchReason))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONSWITCHEVENTARGS__CTOR_OFFSET))(this, reason);
		}

		::Microsoft::Win32::SessionSwitchReason get_Reason()
		{
			return ((::Microsoft::Win32::SessionSwitchReason(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONSWITCHEVENTARGS_GET_REASON_OFFSET))(this);
		}
	};
}
