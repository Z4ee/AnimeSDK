#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/PowerModes.h"
#include "unitysdk/System/EventArgs.h"

#define MICROSOFT_WIN32_POWERMODECHANGEDEVENTARGS_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1C6F14B0)
#define MICROSOFT_WIN32_POWERMODECHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1470)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int PowerModeChangedEventArgs_TypeDefinitionIndex = 4293;

	class PowerModeChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::PowerModes mode)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::PowerModes))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_POWERMODECHANGEDEVENTARGS__CTOR_OFFSET))(this, mode);
		}

		::Microsoft::Win32::PowerModes get_Mode()
		{
			return ((::Microsoft::Win32::PowerModes(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_POWERMODECHANGEDEVENTARGS_GET_MODE_OFFSET))(this);
		}
	};
}
