#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization { class SerializedEventInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDEVENTINFO_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8E190)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDEVENTINFO_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8E170)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDEVENTINFO_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8E2A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SerializedEventInfo_Formatter_TypeDefinitionIndex = 30075;

	class Graph_SerializedEventInfo_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDEVENTINFO_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::ParadoxNotion::Serialization::SerializedEventInfo* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::ParadoxNotion::Serialization::SerializedEventInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDEVENTINFO_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::ParadoxNotion::Serialization::SerializedEventInfo* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::ParadoxNotion::Serialization::SerializedEventInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDEVENTINFO_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
