#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/InControl/NativeInputOptions.h"
#include "unitysdk/InControl/NativeVersionInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"

namespace System { class String; }

#define INCONTROL_NATIVE_GETANALOGGLYPHNAME_OFFSET UNITYSDK_OFFSET(0x15B81680)
#define INCONTROL_NATIVE_GETBUTTONGLYPHNAME_OFFSET UNITYSDK_OFFSET(0x15B81710)
#define INCONTROL_NATIVE_GETDEVICEEVENTS_OFFSET UNITYSDK_OFFSET(0x15B813C0)
#define INCONTROL_NATIVE_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x15B811F0)
#define INCONTROL_NATIVE_GETDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x15B81330)
#define INCONTROL_NATIVE_GETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x15B81170)
#define INCONTROL_NATIVE_INIT_OFFSET UNITYSDK_OFFSET(0x15B81060)
#define INCONTROL_NATIVE_SETHAPTICSTATE_OFFSET UNITYSDK_OFFSET(0x15B81440)
#define INCONTROL_NATIVE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x15B81560)
#define INCONTROL_NATIVE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x15B815F0)
#define INCONTROL_NATIVE_SETTRIGGERSHAPTICSTATE_OFFSET UNITYSDK_OFFSET(0x15B814D0)
#define INCONTROL_NATIVE_STOP_OFFSET UNITYSDK_OFFSET(0x15B810F0)

namespace InControl
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 31449;

	class Native : public ::System::Object
	{
	public:
		// static const ::System::String* libraryName; // 0x0
		// static const ::System::Runtime::InteropServices::CallingConvention callingConvention; // 0x0

		static ::System::Void Init(::InControl::NativeInputOptions options)
		{
			return ((::System::Void(*)(::InControl::NativeInputOptions))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_INIT_OFFSET))(options);
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_STOP_OFFSET))();
		}

		static ::System::Void GetVersionInfo(::InControl::NativeVersionInfo& versionInfo)
		{
			return ((::System::Void(*)(::InControl::NativeVersionInfo&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETVERSIONINFO_OFFSET))(versionInfo);
		}

		static ::System::Boolean GetDeviceInfo(::System::UInt32 handle, ::InControl::InputDeviceInfo& deviceInfo)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::InControl::InputDeviceInfo&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETDEVICEINFO_OFFSET))(handle, deviceInfo);
		}

		static ::System::Boolean GetDeviceState(::System::UInt32 handle, ::System::IntPtr& deviceState)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETDEVICESTATE_OFFSET))(handle, deviceState);
		}

		static ::System::Int32 GetDeviceEvents(::System::IntPtr& deviceEvents)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETDEVICEEVENTS_OFFSET))(deviceEvents);
		}

		static ::System::Void SetHapticState(::System::UInt32 handle, ::System::Byte lowFrequency, ::System::Byte highFrequency)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETHAPTICSTATE_OFFSET))(handle, lowFrequency, highFrequency);
		}

		static ::System::Void SetTriggersHapticState(::System::UInt32 handle, ::System::Byte leftTrigger, ::System::Byte rightTrigger)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETTRIGGERSHAPTICSTATE_OFFSET))(handle, leftTrigger, rightTrigger);
		}

		static ::System::Void SetLightColor(::System::UInt32 handle, ::System::Byte red, ::System::Byte green, ::System::Byte blue)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETLIGHTCOLOR_OFFSET))(handle, red, green, blue);
		}

		static ::System::Void SetLightFlash(::System::UInt32 handle, ::System::Byte flashOnDuration, ::System::Byte flashOffDuration)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETLIGHTFLASH_OFFSET))(handle, flashOnDuration, flashOffDuration);
		}

		static ::System::UInt32 GetAnalogGlyphName(::System::UInt32 handle, ::System::UInt32 index, ::System::IntPtr& glyphName)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETANALOGGLYPHNAME_OFFSET))(handle, index, glyphName);
		}

		static ::System::UInt32 GetButtonGlyphName(::System::UInt32 handle, ::System::UInt32 index, ::System::IntPtr& glyphName)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETBUTTONGLYPHNAME_OFFSET))(handle, index, glyphName);
		}
	};
}
