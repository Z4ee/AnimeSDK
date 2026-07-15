#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ReadOnlyMemoryFormatter_1_TypeDefinitionIndex = 7339;

	template <typename T>
	class ReadOnlyMemoryFormatter_1 : public ::System::Object
	{
	public:
	};
}
