#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17335300)
#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x173352A0)
#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17335420)
#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17335290)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableByteFormatter_TypeDefinitionIndex = 9523;

	class NullableByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableByteFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableByteFormatter_TypeDefinitionIndex)->GetStaticField(0x41CA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Byte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
