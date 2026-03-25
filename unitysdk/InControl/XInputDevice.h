#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/XInputDotNetPure/GamePadState.h"

namespace InControl { class XInputDeviceManager; }

#define INCONTROL_XINPUTDEVICE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15D1C030)
#define INCONTROL_XINPUTDEVICE_GET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x15D1B100)
#define INCONTROL_XINPUTDEVICE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x15D1C2C0)
#define INCONTROL_XINPUTDEVICE_SET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x15D1B110)
#define INCONTROL_XINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15D1B550)
#define INCONTROL_XINPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x15D1C0F0)
#define INCONTROL_XINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1B120)

namespace InControl
{
	inline static constexpr unsigned int XInputDevice_TypeDefinitionIndex = 31503;

	class XInputDevice : public ::InControl::InputDevice
	{
	public:
		// static const ::System::Single LowerDeadZone; // 0x0
		// static const ::System::Single UpperDeadZone; // 0x0
		::InControl::XInputDeviceManager* owner; // 0x198
		::XInputDotNetPure::GamePadState state; // 0x1A0
		::System::Int32 _DeviceIndex_k__BackingField; // 0x1F8

		::System::Void _ctor(::System::Int32 deviceIndex, ::InControl::XInputDeviceManager* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::InControl::XInputDeviceManager*))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE__CTOR_OFFSET))(this, deviceIndex, owner);
		}

		::System::Int32 get_DeviceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_GET_DEVICEINDEX_OFFSET))(this);
		}

		::System::Void set_DeviceIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_SET_DEVICEINDEX_OFFSET))(this, value);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void Vibrate(::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICE_VIBRATE_OFFSET))(this, leftMotor, rightMotor);
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
