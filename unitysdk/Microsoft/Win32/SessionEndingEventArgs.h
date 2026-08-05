#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SessionEndReasons.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_SESSIONENDINGEVENTARGS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1C6F1530)
#define MICROSOFT_WIN32_SESSIONENDINGEVENTARGS_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1C6F15B0)
#define MICROSOFT_WIN32_SESSIONENDINGEVENTARGS_SET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1C6F1570)
#define MICROSOFT_WIN32_SESSIONENDINGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F14F0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionEndingEventArgs_TypeDefinitionIndex = 4299;

	class SessionEndingEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::SessionEndReasons reason)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SessionEndReasons))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTARGS__CTOR_OFFSET))(this, reason);
		}

		::System::Boolean get_Cancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTARGS_GET_CANCEL_OFFSET))(this);
		}

		::System::Void set_Cancel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTARGS_SET_CANCEL_OFFSET))(this, value);
		}

		::Microsoft::Win32::SessionEndReasons get_Reason()
		{
			return ((::Microsoft::Win32::SessionEndReasons(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTARGS_GET_REASON_OFFSET))(this);
		}
	};
}
