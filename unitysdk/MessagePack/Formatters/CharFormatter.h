#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_CHARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666E470)
#define MESSAGEPACK_FORMATTERS_CHARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666E460)
#define MESSAGEPACK_FORMATTERS_CHARFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1666E510)
#define MESSAGEPACK_FORMATTERS_CHARFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666E450)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CharFormatter_TypeDefinitionIndex = 7422;

	class CharFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::CharFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::CharFormatter**)Il2CppClass::FromTypeDefinitionIndex(CharFormatter_TypeDefinitionIndex)->GetStaticField(0x342E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Char a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Char, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Char Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Char(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
