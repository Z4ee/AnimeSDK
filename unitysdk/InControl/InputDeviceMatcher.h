#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/OptionalInputDeviceDriverType.h"
#include "unitysdk/InControl/OptionalInputDeviceTransportType.h"
#include "unitysdk/InControl/OptionalUInt16.h"
#include "unitysdk/InControl/OptionalUInt32.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define INCONTROL_INPUTDEVICEMATCHER_GET_DRIVERTYPE_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define INCONTROL_INPUTDEVICEMATCHER_GET_NAMELITERAL_OFFSET UNITYSDK_OFFSET(0x2AD20)
#define INCONTROL_INPUTDEVICEMATCHER_GET_NAMEPATTERN_OFFSET UNITYSDK_OFFSET(0x11290)
#define INCONTROL_INPUTDEVICEMATCHER_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1E110)
#define INCONTROL_INPUTDEVICEMATCHER_GET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define INCONTROL_INPUTDEVICEMATCHER_GET_VENDORID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define INCONTROL_INPUTDEVICEMATCHER_GET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x60D0)
#define INCONTROL_INPUTDEVICEMATCHER_MATCHES_OFFSET UNITYSDK_OFFSET(0x3824E10)
#define INCONTROL_INPUTDEVICEMATCHER_SET_DRIVERTYPE_OFFSET UNITYSDK_OFFSET(0x2A90)
#define INCONTROL_INPUTDEVICEMATCHER_SET_NAMELITERAL_OFFSET UNITYSDK_OFFSET(0x2AD30)
#define INCONTROL_INPUTDEVICEMATCHER_SET_NAMEPATTERN_OFFSET UNITYSDK_OFFSET(0xBBE0)
#define INCONTROL_INPUTDEVICEMATCHER_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x21F0)
#define INCONTROL_INPUTDEVICEMATCHER_SET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x6F00)
#define INCONTROL_INPUTDEVICEMATCHER_SET_VENDORID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define INCONTROL_INPUTDEVICEMATCHER_SET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x95B0)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceMatcher_TypeDefinitionIndex = 37879;

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

		::System::Void set_VendorID(::InControl::OptionalUInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_VENDORID_OFFSET))(this, a1);
		}

		::InControl::OptionalUInt16 get_ProductID()
		{
			return ((::InControl::OptionalUInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductID(::InControl::OptionalUInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalUInt16))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::InControl::OptionalUInt32 get_VersionNumber()
		{
			return ((::InControl::OptionalUInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_VERSIONNUMBER_OFFSET))(this);
		}

		::System::Void set_VersionNumber(::InControl::OptionalUInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalUInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_VERSIONNUMBER_OFFSET))(this, a1);
		}

		::InControl::OptionalInputDeviceDriverType get_DriverType()
		{
			return ((::InControl::OptionalInputDeviceDriverType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_DRIVERTYPE_OFFSET))(this);
		}

		::System::Void set_DriverType(::InControl::OptionalInputDeviceDriverType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalInputDeviceDriverType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_DRIVERTYPE_OFFSET))(this, a1);
		}

		::InControl::OptionalInputDeviceTransportType get_TransportType()
		{
			return ((::InControl::OptionalInputDeviceTransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_TRANSPORTTYPE_OFFSET))(this);
		}

		::System::Void set_TransportType(::InControl::OptionalInputDeviceTransportType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OptionalInputDeviceTransportType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_TRANSPORTTYPE_OFFSET))(this, a1);
		}

		::System::String* get_NameLiteral()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_NAMELITERAL_OFFSET))(this);
		}

		::System::Void set_NameLiteral(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_NAMELITERAL_OFFSET))(this, a1);
		}

		::System::String* get_NamePattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_GET_NAMEPATTERN_OFFSET))(this);
		}

		::System::Void set_NamePattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_SET_NAMEPATTERN_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Matches(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEMATCHER_MATCHES_OFFSET))(this, a1);
		}
		*/
	};
}
