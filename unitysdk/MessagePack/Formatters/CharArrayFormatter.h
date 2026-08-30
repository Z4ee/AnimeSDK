#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6716F0)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B671530)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6718E0)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B671520)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CharArrayFormatter_TypeDefinitionIndex = 7424;

	class CharArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::CharArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::CharArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(CharArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x29EB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Char>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Char>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Char>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
