#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/IpAddressUtil_IpParseResult.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_IPADDRESSUTIL_PARSEIPADDRESSANDPORT_OFFSET UNITYSDK_OFFSET(0x1D971230)

namespace Foundation
{
	inline static constexpr unsigned int IpAddressUtil_TypeDefinitionIndex = 7984;

	class IpAddressUtil : public ::System::Object
	{
	public:
		static ::Foundation::IpAddressUtil_IpParseResult ParseIpAddressAndPort(::System::String* input)
		{
			return ((::Foundation::IpAddressUtil_IpParseResult(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_IPADDRESSUTIL_PARSEIPADDRESSANDPORT_OFFSET))(input);
		}
	};
}
