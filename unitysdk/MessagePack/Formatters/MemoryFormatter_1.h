#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int MemoryFormatter_1_TypeDefinitionIndex = 7338;

	template <typename T>
	class MemoryFormatter_1 : public ::System::Object
	{
	public:
	};
}
