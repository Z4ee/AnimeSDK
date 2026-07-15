#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class GenericEnumFormatter_1_EnumDeserialize; }
namespace MessagePack::Formatters { template <typename T> class GenericEnumFormatter_1_EnumSerialize; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericEnumFormatter_1_TypeDefinitionIndex = 7391;

	template <typename T>
	class GenericEnumFormatter_1 : public ::System::Object
	{
	public:
		::MessagePack::Formatters::GenericEnumFormatter_1_EnumSerialize<T>* serializer; // 0x0
		::MessagePack::Formatters::GenericEnumFormatter_1_EnumDeserialize<T>* deserializer; // 0x0
	};
}
