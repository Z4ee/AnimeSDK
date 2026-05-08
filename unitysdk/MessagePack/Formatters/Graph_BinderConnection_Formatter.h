#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class BinderConnection; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_GRAPH_BINDERCONNECTION_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0AFCF0)
#define MESSAGEPACK_FORMATTERS_GRAPH_BINDERCONNECTION_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0AF110)
#define MESSAGEPACK_FORMATTERS_GRAPH_BINDERCONNECTION_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B02D0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_BinderConnection_Formatter_TypeDefinitionIndex = 27514;

	class Graph_BinderConnection_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_BINDERCONNECTION_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::FlowCanvas::BinderConnection* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::FlowCanvas::BinderConnection*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_BINDERCONNECTION_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::FlowCanvas::BinderConnection* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::FlowCanvas::BinderConnection*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_BINDERCONNECTION_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
