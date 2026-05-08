#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization { class SerializedUnityEventInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDUNITYEVENTINFO_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0B11F0)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDUNITYEVENTINFO_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0B11D0)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDUNITYEVENTINFO_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B12F0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SerializedUnityEventInfo_Formatter_TypeDefinitionIndex = 27015;

	class Graph_SerializedUnityEventInfo_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDUNITYEVENTINFO_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::ParadoxNotion::Serialization::SerializedUnityEventInfo* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::ParadoxNotion::Serialization::SerializedUnityEventInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDUNITYEVENTINFO_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::ParadoxNotion::Serialization::SerializedUnityEventInfo* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::ParadoxNotion::Serialization::SerializedUnityEventInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDUNITYEVENTINFO_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
