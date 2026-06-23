#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class GraphMemoryStreamBufferWriter; }
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_USAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52E910)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int General_BinarySerializer_UsageContext_TypeDefinitionIndex = 29237;

	class General_BinarySerializer_UsageContext : public ::System::Object
	{
	public:
		::MessagePack::MessagePackSerializerOptions* DeserializeOption; // 0x10
		::MessagePack::IFormatterResolver* DeserializeResolver; // 0x18
		::MessagePack::IFormatterResolver* SerializeResolver; // 0x20
		::MessagePack::GraphMemoryStreamBufferWriter* BufferWriter; // 0x28
		::MessagePack::MessagePackSerializerOptions* SerializeOption; // 0x30
		::System::Boolean IsInit; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_USAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
