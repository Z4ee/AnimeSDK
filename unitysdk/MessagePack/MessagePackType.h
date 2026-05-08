#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 26539;

	enum class MessagePackType : ::System::Byte
	{
		Extension = 0x9,
		Map = 0x8,
		Binary = 0x6,
		Boolean = 0x3,
		Unknown = 0x0,
		String = 0x5,
		Float = 0x4,
		Nil = 0x2,
		Array = 0x7,
		Integer = 0x1,
	};
}
