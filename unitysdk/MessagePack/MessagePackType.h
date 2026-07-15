#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 7125;

	enum class MessagePackType : ::System::Byte
	{
		Unknown = 0x0,
		Integer = 0x1,
		Nil = 0x2,
		Boolean = 0x3,
		Float = 0x4,
		String = 0x5,
		Binary = 0x6,
		Array = 0x7,
		Map = 0x8,
		Extension = 0x9,
	};
}
