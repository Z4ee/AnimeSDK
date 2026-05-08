#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization { class SerializedFieldInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDFIELDINFO_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB30A0)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDFIELDINFO_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB3080)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDFIELDINFO_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB31A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SerializedFieldInfo_Formatter_TypeDefinitionIndex = 27715;

	class Graph_SerializedFieldInfo_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDFIELDINFO_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::ParadoxNotion::Serialization::SerializedFieldInfo* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::ParadoxNotion::Serialization::SerializedFieldInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDFIELDINFO_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::ParadoxNotion::Serialization::SerializedFieldInfo* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::ParadoxNotion::Serialization::SerializedFieldInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDFIELDINFO_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
