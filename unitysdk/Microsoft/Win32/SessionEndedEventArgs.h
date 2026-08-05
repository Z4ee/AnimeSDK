#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SessionEndReasons.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_SESSIONENDEDEVENTARGS_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1E96E600)
#define MICROSOFT_WIN32_SESSIONENDEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96E5C0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionEndedEventArgs_TypeDefinitionIndex = 4296;

	class SessionEndedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::SessionEndReasons reason)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SessionEndReasons))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDEDEVENTARGS__CTOR_OFFSET))(this, reason);
		}

		::Microsoft::Win32::SessionEndReasons get_Reason()
		{
			return ((::Microsoft::Win32::SessionEndReasons(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDEDEVENTARGS_GET_REASON_OFFSET))(this);
		}
	};
}
