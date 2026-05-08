#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int IpAddressUtil_IpType_TypeDefinitionIndex = 8058;

	enum class IpAddressUtil_IpType : ::System::Int32
	{
		IPv4 = 1,
		IPv6 = 2,
		Invalid = 0,
	};
}
