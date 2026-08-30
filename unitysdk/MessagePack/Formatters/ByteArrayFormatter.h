#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666D330)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666D290)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1666D640)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666D280)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteArrayFormatter_TypeDefinitionIndex = 7429;

	class ByteArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x33E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Byte>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Byte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
