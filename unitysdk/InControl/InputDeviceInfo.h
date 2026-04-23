#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceDriverType.h"
#include "unitysdk/InControl/InputDeviceTransportType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define INCONTROL_INPUTDEVICEINFO_HASSAMELOCATION_OFFSET UNITYSDK_OFFSET(0x2297040)
#define INCONTROL_INPUTDEVICEINFO_HASSAMEPRODUCTID_OFFSET UNITYSDK_OFFSET(0x2297020)
#define INCONTROL_INPUTDEVICEINFO_HASSAMESERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x2297070)
#define INCONTROL_INPUTDEVICEINFO_HASSAMEVENDORID_OFFSET UNITYSDK_OFFSET(0x2297010)
#define INCONTROL_INPUTDEVICEINFO_HASSAMEVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x2297030)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceInfo_TypeDefinitionIndex = 37144;

	struct alignas(8) InputDeviceInfo
	{
		::System::String* name; // 0x10
		::System::String* location; // 0x18
		::System::String* serialNumber; // 0x20
		::System::UInt16 vendorID; // 0x28
		::System::UInt16 productID; // 0x2A
		::System::UInt32 versionNumber; // 0x2C
		::InControl::InputDeviceDriverType driverType; // 0x30
		::InControl::InputDeviceTransportType transportType; // 0x32
		::System::UInt32 numButtons; // 0x34
		::System::UInt32 numAnalogs; // 0x38

		::System::Boolean HasSameVendorID(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEINFO_HASSAMEVENDORID_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameProductID(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEINFO_HASSAMEPRODUCTID_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameVersionNumber(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEINFO_HASSAMEVERSIONNUMBER_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameLocation(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEINFO_HASSAMELOCATION_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameSerialNumber(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEINFO_HASSAMESERIALNUMBER_OFFSET))(this, deviceInfo);
		}
	};
}
