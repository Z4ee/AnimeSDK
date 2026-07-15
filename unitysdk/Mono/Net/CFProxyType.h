#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxyType_TypeDefinitionIndex = 2407;

	enum class CFProxyType : ::System::Int32
	{
		None = 0,
		AutoConfigurationUrl = 1,
		AutoConfigurationJavaScript = 2,
		FTP = 3,
		HTTP = 4,
		HTTPS = 5,
		SOCKS = 6,
	};
}
