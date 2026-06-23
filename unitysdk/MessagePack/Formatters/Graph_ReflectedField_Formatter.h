#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ReflectedFieldNodeWrapper; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDFIELD_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB97630)
#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDFIELD_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB96B60)
#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDFIELD_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB97F30)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_ReflectedField_Formatter_TypeDefinitionIndex = 30428;

	class Graph_ReflectedField_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDFIELD_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDFIELD_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::FlowCanvas::Nodes::ReflectedFieldNodeWrapper* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::FlowCanvas::Nodes::ReflectedFieldNodeWrapper*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDFIELD_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
