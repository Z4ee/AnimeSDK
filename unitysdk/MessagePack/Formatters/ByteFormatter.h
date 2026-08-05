#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E538890)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E538880)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5388A0)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E538870)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteFormatter_TypeDefinitionIndex = 31024;

	class ByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteFormatter_TypeDefinitionIndex)->GetStaticField(0x25C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Byte value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Byte, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Byte Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Byte(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
