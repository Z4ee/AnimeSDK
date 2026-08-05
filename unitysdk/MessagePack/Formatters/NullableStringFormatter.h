#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class String; }

#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DAD8F60)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DAD8F50)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8F70)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8F40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableStringFormatter_TypeDefinitionIndex = 31183;

	class NullableStringFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableStringFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableStringFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableStringFormatter_TypeDefinitionIndex)->GetStaticField(0x25110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::String* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::String*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::String* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::String*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
