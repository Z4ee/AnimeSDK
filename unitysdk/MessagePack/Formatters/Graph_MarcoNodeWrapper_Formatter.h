#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Macros { class MacroNodeWrapper; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_GRAPH_MARCONODEWRAPPER_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0EEB30)
#define MESSAGEPACK_FORMATTERS_GRAPH_MARCONODEWRAPPER_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0EE720)
#define MESSAGEPACK_FORMATTERS_GRAPH_MARCONODEWRAPPER_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EF040)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_MarcoNodeWrapper_Formatter_TypeDefinitionIndex = 28121;

	class Graph_MarcoNodeWrapper_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_MARCONODEWRAPPER_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::FlowCanvas::Macros::MacroNodeWrapper* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::FlowCanvas::Macros::MacroNodeWrapper*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_MARCONODEWRAPPER_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::FlowCanvas::Macros::MacroNodeWrapper* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::FlowCanvas::Macros::MacroNodeWrapper*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_MARCONODEWRAPPER_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
