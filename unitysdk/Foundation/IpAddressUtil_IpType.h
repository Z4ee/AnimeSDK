#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int IpAddressUtil_IpType_TypeDefinitionIndex = 7986;

	enum class IpAddressUtil_IpType : ::System::Int32
	{
		Invalid = 0,
		IPv6 = 2,
		IPv4 = 1,
	};
}
