#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B459960)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4598E0)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B459A20)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4598D0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CharArrayFormatter_TypeDefinitionIndex = 27270;

	class CharArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::CharArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::CharArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(CharArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x20940);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Char>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Char>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Char>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
