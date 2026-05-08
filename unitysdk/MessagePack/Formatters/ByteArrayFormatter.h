#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A297F70)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A297F60)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A297FD0)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A297F50)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteArrayFormatter_TypeDefinitionIndex = 26934;

	class ByteArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x208C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Byte>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Byte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Byte>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
