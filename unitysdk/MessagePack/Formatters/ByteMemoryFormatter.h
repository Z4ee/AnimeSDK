#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18138BB0)
#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18138B70)
#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18138C30)
#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18138B60)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteMemoryFormatter_TypeDefinitionIndex = 7327;

	class ByteMemoryFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteMemoryFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteMemoryFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteMemoryFormatter_TypeDefinitionIndex)->GetStaticField(0x86F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Memory_1<::System::Byte> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Memory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Memory_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Memory_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
