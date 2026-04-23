#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_CHARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732ABA0)
#define MESSAGEPACK_FORMATTERS_CHARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732AB90)
#define MESSAGEPACK_FORMATTERS_CHARFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1732AC40)
#define MESSAGEPACK_FORMATTERS_CHARFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1732AB80)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CharFormatter_TypeDefinitionIndex = 9527;

	class CharFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::CharFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::CharFormatter**)Il2CppClass::FromTypeDefinitionIndex(CharFormatter_TypeDefinitionIndex)->GetStaticField(0x418B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Char value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Char, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Char Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Char(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
