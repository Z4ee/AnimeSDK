#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D4030A0)
#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D403060)
#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D403110)
#define MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D403050)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteMemoryFormatter_TypeDefinitionIndex = 30454;

	class ByteMemoryFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteMemoryFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteMemoryFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteMemoryFormatter_TypeDefinitionIndex)->GetStaticField(0x24230);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Memory_1<::System::Byte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Memory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Memory_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Memory_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEMEMORYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
