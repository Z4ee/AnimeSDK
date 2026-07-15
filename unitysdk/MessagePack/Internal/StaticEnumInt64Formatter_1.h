#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int StaticEnumInt64Formatter_1_TypeDefinitionIndex = 7312;

	template <typename T>
	class StaticEnumInt64Formatter_1 : public ::System::Object
	{
	public:
	};
}
