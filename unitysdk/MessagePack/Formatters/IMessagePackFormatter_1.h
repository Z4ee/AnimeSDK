#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int IMessagePackFormatter_1_TypeDefinitionIndex = 29942;

	template <typename T>
	class IMessagePackFormatter_1
	{
	public:
	};
}
