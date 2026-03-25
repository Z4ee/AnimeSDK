#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/OptionalInputDeviceDriverType.h"
#include "unitysdk/InControl/OptionalInputDeviceTransportType.h"
#include "unitysdk/InControl/OptionalUInt16.h"
#include "unitysdk/InControl/OptionalUInt32.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define INCONTROL_INPUTDEVICEMATCHER_GET_DRIVERTYPE_OFFSET UNITYSDK_OFFSET(0x68F0)
#define INCONTROL_INPUTDEVICEMATCHER_GET_NAMELITERAL_OFFSET UNITYSDK_OFFSET(0x28E30)
#define INCONTROL_INPUTDEVICEMATCHER_GET_NAMEPATTERN_OFFSET UNITYSDK_OFFSET(0x104B0)
#define INCONTROL_INPUTDEVICEMATCHER_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define INCONTROL_INPUTDEVICEMATCHER_GET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x6900)
#define INCONTROL_INPUTDEVICEMATCHER_GET_VENDORID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define INCONTROL_INPUTDEVICEMATCHER_GET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define INCONTROL_INPUTDEVICEMATCHER_MATCHES_OFFSET UNITYSDK_OFFSET(0x20C55F0)
#define INCONTROL_INPUTDEVICEMATCHER_SET_DRIVERTYPE_OFFSET UNITYSDK_OFFSET(0x26F0)
#define INCONTROL_INPUTDEVICEMATCHER_SET_NAMELITERAL_OFFSET UNITYSDK_OFFSET(0x28E40)
#define INCONTROL_INPUTDEVICEMATCHER_SET_NAMEPATTERN_OFFSET UNITYSDK_OFFSET(0xB390)
#define INCONTROL_INPUTDEVICEMATCHER_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1D50)
#define INCONTROL_INPUTDEVICEMATCHER_SET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x6910)
#define INCONTROL_INPUTDEVICEMATCHER_SET_VENDORID_OFFSET UNITYSDK_OFFSET(0x29130)
#define INCONTROL_INPUTDEVICEMATCHER_SET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x8D10)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceMatcher_TypeDefinitionIndex = 31427;

	struct alignas(8) InputDeviceMatcher
	{
		::InControl::OptionalUInt16 vendorID; // 0x10
		::InControl::OptionalUInt16 productID; // 0x14
		::InControl::OptionalUInt32 versionNumber; // 0x18
		::InControl::OptionalInputDeviceDriverType driverType; // 0x20
		::InControl::OptionalInputDeviceTransportType transportType; // 0x24
		::System::String* nameLiteral; // 0x28
		::System::String* namePattern; // 0x30

		::InControl::OptionalUInt16 get_VendorID()
		{
			return ((::InControl::OptionalUInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_VENDORID_OFFSET))(this);
		}

		::System::Void set_VendorID(::InControl::OptionalUInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_VENDORID_OFFSET))(this, value);
		}

		::InControl::OptionalUInt16 get_ProductID()
		{
			return ((::InControl::OptionalUInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductID(::InControl::OptionalUInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_PRODUCTID_OFFSET))(this, value);
		}

		::InControl::OptionalUInt32 get_VersionNumber()
		{
			return ((::InControl::OptionalUInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_VERSIONNUMBER_OFFSET))(this);
		}

		::System::Void set_VersionNumber(::InControl::OptionalUInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_VERSIONNUMBER_OFFSET))(this, value);
		}

		::InControl::OptionalInputDeviceDriverType get_DriverType()
		{
			return ((::InControl::OptionalInputDeviceDriverType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_DRIVERTYPE_OFFSET))(this);
		}

		::System::Void set_DriverType(::InControl::OptionalInputDeviceDriverType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_DRIVERTYPE_OFFSET))(this, value);
		}

		::InControl::OptionalInputDeviceTransportType get_TransportType()
		{
			return ((::InControl::OptionalInputDeviceTransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_TRANSPORTTYPE_OFFSET))(this);
		}

		::System::Void set_TransportType(::InControl::OptionalInputDeviceTransportType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_TRANSPORTTYPE_OFFSET))(this, value);
		}

		::System::String* get_NameLiteral()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_NAMELITERAL_OFFSET))(this);
		}

		::System::Void set_NameLiteral(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_NAMELITERAL_OFFSET))(this, value);
		}

		::System::String* get_NamePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_NAMEPATTERN_OFFSET))(this);
		}

		::System::Void set_NamePattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_NAMEPATTERN_OFFSET))(this, value);
		}

		/*
		::System::Boolean Matches(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_MATCHES_OFFSET))(this, deviceInfo);
		}
		*/
	};
}
