#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 30907;

	enum class MessagePackType : ::System::Byte
	{
		Nil = 0x2,
		Boolean = 0x3,
		Array = 0x7,
		Extension = 0x9,
		Binary = 0x6,
		Float = 0x4,
		Map = 0x8,
		String = 0x5,
		Unknown = 0x0,
		Integer = 0x1,
	};
}
