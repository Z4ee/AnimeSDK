#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCompression_TypeDefinitionIndex = 30775;

	enum class MessagePackCompression : ::System::Int32
	{
		Lz4BlockArray = 2,
		Lz4Block = 1,
		None = 0,
	};
}
