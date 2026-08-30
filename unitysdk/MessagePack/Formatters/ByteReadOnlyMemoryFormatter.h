#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666DD00)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666DCC0)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1666DD80)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666DCB0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteReadOnlyMemoryFormatter_TypeDefinitionIndex = 7320;

	class ByteReadOnlyMemoryFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteReadOnlyMemoryFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteReadOnlyMemoryFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteReadOnlyMemoryFormatter_TypeDefinitionIndex)->GetStaticField(0x33EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::ReadOnlyMemory_1<::System::Byte> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::ReadOnlyMemory_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::ReadOnlyMemory_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
