#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/InControl/NativeInputOptions.h"
#include "unitysdk/InControl/NativeVersionInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"

namespace System { class String; }

#define INCONTROL_NATIVE_GETANALOGGLYPHNAME_OFFSET UNITYSDK_OFFSET(0x1B5036C0)
#define INCONTROL_NATIVE_GETBUTTONGLYPHNAME_OFFSET UNITYSDK_OFFSET(0x1B503750)
#define INCONTROL_NATIVE_GETDEVICEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B503400)
#define INCONTROL_NATIVE_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x1B503230)
#define INCONTROL_NATIVE_GETDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x1B503370)
#define INCONTROL_NATIVE_GETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1B5031B0)
#define INCONTROL_NATIVE_INIT_OFFSET UNITYSDK_OFFSET(0x1B5030A0)
#define INCONTROL_NATIVE_SETHAPTICSTATE_OFFSET UNITYSDK_OFFSET(0x1B503480)
#define INCONTROL_NATIVE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B5035A0)
#define INCONTROL_NATIVE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x1B503630)
#define INCONTROL_NATIVE_SETTRIGGERSHAPTICSTATE_OFFSET UNITYSDK_OFFSET(0x1B503510)
#define INCONTROL_NATIVE_STOP_OFFSET UNITYSDK_OFFSET(0x1B503130)

namespace InControl
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 39568;

	class Native : public ::System::Object
	{
	public:
		// static const ::System::String* libraryName; // 0x0
		// static const ::System::Runtime::InteropServices::CallingConvention callingConvention; // 0x0

		static ::System::Void Init(::InControl::NativeInputOptions a1)
		{
			return ((::System::Void(*)(::InControl::NativeInputOptions))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_INIT_OFFSET))(a1);
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_STOP_OFFSET))();
		}

		static ::System::Void GetVersionInfo(::InControl::NativeVersionInfo& a1)
		{
			return ((::System::Void(*)(::InControl::NativeVersionInfo&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETVERSIONINFO_OFFSET))(a1);
		}

		static ::System::Boolean GetDeviceInfo(::System::UInt32 a1, ::InControl::InputDeviceInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::InControl::InputDeviceInfo&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETDEVICEINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDeviceState(::System::UInt32 a1, ::System::IntPtr& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETDEVICESTATE_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetDeviceEvents(::System::IntPtr& a1)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETDEVICEEVENTS_OFFSET))(a1);
		}

		static ::System::Void SetHapticState(::System::UInt32 a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETHAPTICSTATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetTriggersHapticState(::System::UInt32 a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETTRIGGERSHAPTICSTATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetLightColor(::System::UInt32 a1, ::System::Byte a2, ::System::Byte a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETLIGHTCOLOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetLightFlash(::System::UInt32 a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_SETLIGHTFLASH_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetAnalogGlyphName(::System::UInt32 a1, ::System::UInt32 a2, ::System::IntPtr& a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETANALOGGLYPHNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetButtonGlyphName(::System::UInt32 a1, ::System::UInt32 a2, ::System::IntPtr& a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + INCONTROL_NATIVE_GETBUTTONGLYPHNAME_OFFSET))(a1, a2, a3);
		}
	};
}
