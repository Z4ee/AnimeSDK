#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackCompression.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_MESSAGEPACKCOMPRESSIONEXTENSIONS_ISCOMPRESSION_OFFSET UNITYSDK_OFFSET(0x17364D10)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCompressionExtensions_TypeDefinitionIndex = 9219;

	class MessagePackCompressionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsCompression(::MessagePack::MessagePackCompression compression)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCOMPRESSIONEXTENSIONS_ISCOMPRESSION_OFFSET))(compression);
		}
	};
}
