#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A8F91C0)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A8F9140)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F9220)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F9130)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableDateTimeFormatter_TypeDefinitionIndex = 27401;

	class NullableDateTimeFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableDateTimeFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableDateTimeFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableDateTimeFormatter_TypeDefinitionIndex)->GetStaticField(0x20420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::DateTime> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::DateTime>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::DateTime> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
