#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DAD8390)
#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DAD8310)
#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8460)
#define MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8300)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DateTimeArrayFormatter_TypeDefinitionIndex = 31415;

	class DateTimeArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DateTimeArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DateTimeArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(DateTimeArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x250D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::DateTime>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::DateTime>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::DateTime>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::DateTime>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
