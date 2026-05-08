#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB00D0)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB00C0)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADB00E0)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB00B0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteFormatter_TypeDefinitionIndex = 27064;

	class ByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteFormatter_TypeDefinitionIndex)->GetStaticField(0x207A0);
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
