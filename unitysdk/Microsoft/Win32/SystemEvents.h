#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class PowerModeChangedEventHandler; }
namespace Microsoft::Win32 { class SessionEndedEventHandler; }
namespace Microsoft::Win32 { class SessionEndingEventHandler; }
namespace Microsoft::Win32 { class SessionSwitchEventHandler; }
namespace Microsoft::Win32 { class TimerElapsedEventHandler; }
namespace Microsoft::Win32 { class UserPreferenceChangedEventHandler; }
namespace Microsoft::Win32 { class UserPreferenceChangingEventHandler; }
namespace System { class Delegate; }
namespace System { class EventHandler; }

#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_DISPLAYSETTINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E10F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_DISPLAYSETTINGSCHANGING_OFFSET UNITYSDK_OFFSET(0x1B3E1170)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_EVENTSTHREADSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1B3E11F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_INSTALLEDFONTSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E1270)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B3E12F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_PALETTECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E1370)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_POWERMODECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E13F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_SESSIONENDED_OFFSET UNITYSDK_OFFSET(0x1B3E1470)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_SESSIONENDING_OFFSET UNITYSDK_OFFSET(0x1B3E14F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_SESSIONSWITCH_OFFSET UNITYSDK_OFFSET(0x1B3E1570)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_TIMECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E15F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_TIMERELAPSED_OFFSET UNITYSDK_OFFSET(0x1B3E1670)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_USERPREFERENCECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E16F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_ADD_USERPREFERENCECHANGING_OFFSET UNITYSDK_OFFSET(0x1B3E1770)
#define MICROSOFT_WIN32_SYSTEMEVENTS_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x1B3E17F0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_INVOKEONEVENTSTHREAD_OFFSET UNITYSDK_OFFSET(0x1B3E1830)
#define MICROSOFT_WIN32_SYSTEMEVENTS_KILLTIMER_OFFSET UNITYSDK_OFFSET(0x1B3E1870)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_DISPLAYSETTINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E1130)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_DISPLAYSETTINGSCHANGING_OFFSET UNITYSDK_OFFSET(0x1B3E11B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_EVENTSTHREADSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1B3E1230)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_INSTALLEDFONTSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E12B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1B3E1330)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_PALETTECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E13B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_POWERMODECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E1430)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_SESSIONENDED_OFFSET UNITYSDK_OFFSET(0x1B3E14B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_SESSIONENDING_OFFSET UNITYSDK_OFFSET(0x1B3E1530)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_SESSIONSWITCH_OFFSET UNITYSDK_OFFSET(0x1B3E15B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_TIMECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E1630)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_TIMERELAPSED_OFFSET UNITYSDK_OFFSET(0x1B3E16B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_USERPREFERENCECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E1730)
#define MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_USERPREFERENCECHANGING_OFFSET UNITYSDK_OFFSET(0x1B3E17B0)
#define MICROSOFT_WIN32_SYSTEMEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E10B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SystemEvents_TypeDefinitionIndex = 4304;

	class SystemEvents : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS__CTOR_OFFSET))(this);
		}

		static ::System::Void add_DisplaySettingsChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_DISPLAYSETTINGSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_DisplaySettingsChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_DISPLAYSETTINGSCHANGED_OFFSET))(value);
		}

		static ::System::Void add_DisplaySettingsChanging(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_DISPLAYSETTINGSCHANGING_OFFSET))(value);
		}

		static ::System::Void remove_DisplaySettingsChanging(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_DISPLAYSETTINGSCHANGING_OFFSET))(value);
		}

		static ::System::Void add_EventsThreadShutdown(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_EVENTSTHREADSHUTDOWN_OFFSET))(value);
		}

		static ::System::Void remove_EventsThreadShutdown(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_EVENTSTHREADSHUTDOWN_OFFSET))(value);
		}

		static ::System::Void add_InstalledFontsChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_INSTALLEDFONTSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_InstalledFontsChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_INSTALLEDFONTSCHANGED_OFFSET))(value);
		}

		static ::System::Void add_LowMemory(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_LOWMEMORY_OFFSET))(value);
		}

		static ::System::Void remove_LowMemory(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_LOWMEMORY_OFFSET))(value);
		}

		static ::System::Void add_PaletteChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_PALETTECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_PaletteChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_PALETTECHANGED_OFFSET))(value);
		}

		static ::System::Void add_PowerModeChanged(::Microsoft::Win32::PowerModeChangedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::PowerModeChangedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_POWERMODECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_PowerModeChanged(::Microsoft::Win32::PowerModeChangedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::PowerModeChangedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_POWERMODECHANGED_OFFSET))(value);
		}

		static ::System::Void add_SessionEnded(::Microsoft::Win32::SessionEndedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::SessionEndedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_SESSIONENDED_OFFSET))(value);
		}

		static ::System::Void remove_SessionEnded(::Microsoft::Win32::SessionEndedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::SessionEndedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_SESSIONENDED_OFFSET))(value);
		}

		static ::System::Void add_SessionEnding(::Microsoft::Win32::SessionEndingEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::SessionEndingEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_SESSIONENDING_OFFSET))(value);
		}

		static ::System::Void remove_SessionEnding(::Microsoft::Win32::SessionEndingEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::SessionEndingEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_SESSIONENDING_OFFSET))(value);
		}

		static ::System::Void add_SessionSwitch(::Microsoft::Win32::SessionSwitchEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::SessionSwitchEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_SESSIONSWITCH_OFFSET))(value);
		}

		static ::System::Void remove_SessionSwitch(::Microsoft::Win32::SessionSwitchEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::SessionSwitchEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_SESSIONSWITCH_OFFSET))(value);
		}

		static ::System::Void add_TimeChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_TIMECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_TimeChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::System::EventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_TIMECHANGED_OFFSET))(value);
		}

		static ::System::Void add_TimerElapsed(::Microsoft::Win32::TimerElapsedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::TimerElapsedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_TIMERELAPSED_OFFSET))(value);
		}

		static ::System::Void remove_TimerElapsed(::Microsoft::Win32::TimerElapsedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::TimerElapsedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_TIMERELAPSED_OFFSET))(value);
		}

		static ::System::Void add_UserPreferenceChanged(::Microsoft::Win32::UserPreferenceChangedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::UserPreferenceChangedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_USERPREFERENCECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_UserPreferenceChanged(::Microsoft::Win32::UserPreferenceChangedEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::UserPreferenceChangedEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_USERPREFERENCECHANGED_OFFSET))(value);
		}

		static ::System::Void add_UserPreferenceChanging(::Microsoft::Win32::UserPreferenceChangingEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::UserPreferenceChangingEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_ADD_USERPREFERENCECHANGING_OFFSET))(value);
		}

		static ::System::Void remove_UserPreferenceChanging(::Microsoft::Win32::UserPreferenceChangingEventHandler* value)
		{
			return ((::System::Void(*)(::Microsoft::Win32::UserPreferenceChangingEventHandler*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_REMOVE_USERPREFERENCECHANGING_OFFSET))(value);
		}

		static ::System::IntPtr CreateTimer(::System::Int32 interval)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_CREATETIMER_OFFSET))(interval);
		}

		static ::System::Void InvokeOnEventsThread(::System::Delegate* method)
		{
			return ((::System::Void(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_INVOKEONEVENTSTHREAD_OFFSET))(method);
		}

		static ::System::Void KillTimer(::System::IntPtr timerId)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SYSTEMEVENTS_KILLTIMER_OFFSET))(timerId);
		}
	};
}
