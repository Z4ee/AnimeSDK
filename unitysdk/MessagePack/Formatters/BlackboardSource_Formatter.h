#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace NodeCanvas::Framework::Internal { class BlackboardSource; }

#define MESSAGEPACK_FORMATTERS_BLACKBOARDSOURCE_FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A8F8910)
#define MESSAGEPACK_FORMATTERS_BLACKBOARDSOURCE_FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A8F87A0)
#define MESSAGEPACK_FORMATTERS_BLACKBOARDSOURCE_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F8A80)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BlackboardSource_Formatter_TypeDefinitionIndex = 27205;

	class BlackboardSource_Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BLACKBOARDSOURCE_FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::NodeCanvas::Framework::Internal::BlackboardSource* instance, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::NodeCanvas::Framework::Internal::BlackboardSource*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BLACKBOARDSOURCE_FORMATTER_SERIALIZE_OFFSET))(this, writer, instance, options);
		}

		::NodeCanvas::Framework::Internal::BlackboardSource* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::NodeCanvas::Framework::Internal::BlackboardSource*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BLACKBOARDSOURCE_FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
