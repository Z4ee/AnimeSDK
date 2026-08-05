#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDTYPEINFO_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E22D400)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDTYPEINFO_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E22D3E0)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDTYPEINFO_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22D510)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SerializedTypeInfo_Formatter_TypeDefinitionIndex = 30502;

	class Graph_SerializedTypeInfo_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDTYPEINFO_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::ParadoxNotion::Serialization::SerializedTypeInfo* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::ParadoxNotion::Serialization::SerializedTypeInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDTYPEINFO_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::ParadoxNotion::Serialization::SerializedTypeInfo* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::ParadoxNotion::Serialization::SerializedTypeInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDTYPEINFO_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
