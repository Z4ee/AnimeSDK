#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/IpAddressUtil_IpType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_GET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_GET_IPTYPE_OFFSET UNITYSDK_OFFSET(0x325570)
#define FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_SET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0x462A80)
#define FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_SET_IPTYPE_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_SET_PORT_OFFSET UNITYSDK_OFFSET(0x3C9DB0)

namespace Foundation
{
	inline static constexpr unsigned int IpAddressUtil_IpParseResult_TypeDefinitionIndex = 7985;

	struct alignas(8) IpAddressUtil_IpParseResult
	{
		::Foundation::IpAddressUtil_IpType _IpType_k__BackingField; // 0x10
		::System::String* _IpAddress_k__BackingField; // 0x18
		::System::Nullable_1<::System::UInt32> _Port_k__BackingField; // 0x20

		::Foundation::IpAddressUtil_IpType get_IpType()
		{
			return ((::Foundation::IpAddressUtil_IpType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_GET_IPTYPE_OFFSET))(this);
		}

		::System::Void set_IpType(::Foundation::IpAddressUtil_IpType value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IpAddressUtil_IpType))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_SET_IPTYPE_OFFSET))(this, value);
		}

		::System::String* get_IpAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_GET_IPADDRESS_OFFSET))(this);
		}

		::System::Void set_IpAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_SET_IPADDRESS_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::UInt32> get_Port()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_IPPARSERESULT_SET_PORT_OFFSET))(this, value);
		}
	};
}
