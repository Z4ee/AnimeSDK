#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRC4Encryptor_EncoderMode_TypeDefinitionIndex = 43087;

	enum class MiHoYoSDKRC4Encryptor_EncoderMode : ::System::Int32
	{
		Default = 0,
		Base64Encoder = 1,
		HexEncoder = 2,
	};
}
