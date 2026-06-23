#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization { class SerializedConstructorInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDCONSTRUCTORINFO_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC52020)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDCONSTRUCTORINFO_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC51FE0)
#define MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDCONSTRUCTORINFO_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC52130)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SerializedConstructorInfo_Formatter_TypeDefinitionIndex = 30793;

	class Graph_SerializedConstructorInfo_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDCONSTRUCTORINFO_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::ParadoxNotion::Serialization::SerializedConstructorInfo* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::ParadoxNotion::Serialization::SerializedConstructorInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDCONSTRUCTORINFO_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::ParadoxNotion::Serialization::SerializedConstructorInfo* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::ParadoxNotion::Serialization::SerializedConstructorInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_SERIALIZEDCONSTRUCTORINFO_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
