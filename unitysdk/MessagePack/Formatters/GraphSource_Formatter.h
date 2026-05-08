#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class GraphUserObject; }
namespace NodeCanvas::Framework { class IGraphElement; }
namespace NodeCanvas::Framework::Internal { class GraphSource; }
namespace System { class String; }
namespace System { class Type; }

#define MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0AF570)
#define MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0AEBA0)
#define MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B0290)
#define MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER__GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B0AE920)
#define MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER__WRITEOBJMETA_OFFSET UNITYSDK_OFFSET(0x1B0AE9C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphSource_Formatter_TypeDefinitionIndex = 27460;

	class GraphSource_Formatter : public ::System::Object
	{
	public:
		::System::Type* constType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Object* _GetValue(::System::String* fieldName, ::NodeCanvas::Framework::Internal::GraphSource* graphSource)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::NodeCanvas::Framework::Internal::GraphSource*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER__GETVALUE_OFFSET))(this, fieldName, graphSource);
		}

		::System::UInt32 _WriteObjMeta(::NodeCanvas::Framework::IGraphElement* instance, ::MessagePack::MessagePackWriter& writer, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::NodeCanvas::Framework::IGraphElement*, ::MessagePack::MessagePackWriter&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER__WRITEOBJMETA_OFFSET))(this, instance, writer, options);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::NodeCanvas::Framework::Internal::GraphSource* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::NodeCanvas::Framework::Internal::GraphSource*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::NodeCanvas::Framework::Internal::GraphSource* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHSOURCE_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
