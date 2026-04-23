#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17335D70)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17335D50)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17335EB0)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17335D40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableInt64Formatter_TypeDefinitionIndex = 9502;

	class NullableInt64Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableInt64Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableInt64Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableInt64Formatter_TypeDefinitionIndex)->GetStaticField(0x41D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Int64> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int64>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Int64> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
