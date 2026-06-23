#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 29169;

	enum class MessagePackType : ::System::Byte
	{
		Extension = 0x9,
		Float = 0x4,
		Binary = 0x6,
		Array = 0x7,
		Boolean = 0x3,
		Nil = 0x2,
		String = 0x5,
		Unknown = 0x0,
		Map = 0x8,
		Integer = 0x1,
	};
}
