#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ReflectedConstructorNodeWrapper; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDCONSTRUCTOR_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3298E0)
#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDCONSTRUCTOR_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B329250)
#define MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDCONSTRUCTOR_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32A130)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_ReflectedConstructor_Formatter_TypeDefinitionIndex = 26817;

	class Graph_ReflectedConstructor_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDCONSTRUCTOR_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::FlowCanvas::Nodes::ReflectedConstructorNodeWrapper* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::FlowCanvas::Nodes::ReflectedConstructorNodeWrapper*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDCONSTRUCTOR_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::FlowCanvas::Nodes::ReflectedConstructorNodeWrapper* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::FlowCanvas::Nodes::ReflectedConstructorNodeWrapper*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_REFLECTEDCONSTRUCTOR_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
