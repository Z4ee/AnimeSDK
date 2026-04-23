#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732B3E0)
#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732B2F0)
#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1732B5B0)
#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1732B2E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DateTimeOffsetFormatter_TypeDefinitionIndex = 9539;

	class DateTimeOffsetFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::DateTimeOffset>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::DateTimeOffset>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffsetFormatter_TypeDefinitionIndex)->GetStaticField(0x41930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::DateTimeOffset value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::DateTimeOffset, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::DateTimeOffset Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
