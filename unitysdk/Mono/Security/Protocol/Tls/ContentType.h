#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ContentType_TypeDefinitionIndex = 2354;

	enum class ContentType : ::System::Byte
	{
		ChangeCipherSpec = 0x14,
		Alert = 0x15,
		Handshake = 0x16,
		ApplicationData = 0x17,
	};
}
