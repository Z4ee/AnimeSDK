#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/XInputDotNetPure/GamePadState.h"

namespace InControl { class XInputDeviceManager; }

#define INCONTROL_XINPUTDEVICE_GETSTATE_OFFSET UNITYSDK_OFFSET(0xB56A2E0)
#define INCONTROL_XINPUTDEVICE_GET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0xB5694B0)
#define INCONTROL_XINPUTDEVICE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xB56A560)
#define INCONTROL_XINPUTDEVICE_SET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0xB5694C0)
#define INCONTROL_XINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB569900)
#define INCONTROL_XINPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0xB56A390)
#define INCONTROL_XINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5694D0)

namespace InControl
{
	inline static constexpr unsigned int XInputDevice_TypeDefinitionIndex = 38763;

	class XInputDevice : public ::InControl::InputDevice
	{
	public:
		// static const ::System::Single LowerDeadZone; // 0x0
		// static const ::System::Single UpperDeadZone; // 0x0
		::InControl::XInputDeviceManager* owner; // 0x198
		::System::Int32 _DeviceIndex_k__BackingField; // 0x1A0
		::XInputDotNetPure::GamePadState state; // 0x1A4

		::System::Void _ctor(::System::Int32 a1, ::InControl::XInputDeviceManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::InControl::XInputDeviceManager*))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_DeviceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_GET_DEVICEINDEX_OFFSET))(this);
		}

		::System::Void set_DeviceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_SET_DEVICEINDEX_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void Vibrate(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_VIBRATE_OFFSET))(this, a1, a2);
		}

		::System::Void GetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_GETSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_GET_ISCONNECTED_OFFSET))(this);
		}
	};
}
