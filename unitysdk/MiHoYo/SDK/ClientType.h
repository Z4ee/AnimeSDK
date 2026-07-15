#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ClientType_TypeDefinitionIndex = 8040;

	enum class ClientType : ::System::Int32
	{
		UNKNOWN = 0,
		IOS = 1,
		ANDROID = 2,
		PC = 3,
		WEB = 4,
		WAP = 5,
		PS4 = 6,
		NINTENDO = 7,
		CLOUD_ANDROID = 8,
		CLOUD_PC = 9,
		CLOUD_IOS = 10,
		PS5 = 11,
		MAC_OS = 12,
		CLOUD_MAC = 13,
		CX = 26,
		CLOUD_HOST = 100,
	};
}
