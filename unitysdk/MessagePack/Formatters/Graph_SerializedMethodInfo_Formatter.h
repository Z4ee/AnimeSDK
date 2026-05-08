#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDMETHODINFO_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F5320)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDMETHODINFO_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F52D0)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDMETHODINFO_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F5430)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SerializedMethodInfo_Formatter_TypeDefinitionIndex = 27845;

	class Graph_SerializedMethodInfo_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDMETHODINFO_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::ParadoxNotion::Serialization::SerializedMethodInfo* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::ParadoxNotion::Serialization::SerializedMethodInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDMETHODINFO_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::ParadoxNotion::Serialization::SerializedMethodInfo* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::ParadoxNotion::Serialization::SerializedMethodInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDMETHODINFO_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
