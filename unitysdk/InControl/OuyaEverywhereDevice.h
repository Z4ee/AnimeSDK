#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"

#define INCONTROL_OUYAEVERYWHEREDEVICE_BEFOREATTACH_OFFSET UNITYSDK_OFFSET(0x17200EC0)
#define INCONTROL_OUYAEVERYWHEREDEVICE_GET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x17200C30)
#define INCONTROL_OUYAEVERYWHEREDEVICE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x17200EE0)
#define INCONTROL_OUYAEVERYWHEREDEVICE_SET_DEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x17200C40)
#define INCONTROL_OUYAEVERYWHEREDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17200ED0)
#define INCONTROL_OUYAEVERYWHEREDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x17200C50)

namespace InControl
{
	inline static constexpr unsigned int OuyaEverywhereDevice_TypeDefinitionIndex = 37177;

	class OuyaEverywhereDevice : public ::InControl::InputDevice
	{
	public:
		// static const ::System::Single LowerDeadZone; // 0x0
		// static const ::System::Single UpperDeadZone; // 0x0
		::System::Int32 _DeviceIndex_k__BackingField; // 0x198

		::System::Void _ctor(::System::Int32 deviceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE__CTOR_OFFSET))(this, deviceIndex);
		}

		::System::Int32 get_DeviceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_GET_DEVICEINDEX_OFFSET))(this);
		}

		::System::Void set_DeviceIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_SET_DEVICEINDEX_OFFSET))(this, value);
		}

		::System::Void BeforeAttach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_BEFOREATTACH_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_OUYAEVERYWHEREDEVICE_GET_ISCONNECTED_OFFSET))(this);
		}
	};
}
