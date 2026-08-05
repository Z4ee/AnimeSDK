#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DAD8DA0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DAD8D40)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8DE0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8D30)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceByteBlockFormatter_TypeDefinitionIndex = 31503;

	class NullableForceByteBlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceByteBlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceByteBlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceByteBlockFormatter_TypeDefinitionIndex)->GetStaticField(0x250F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Byte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
