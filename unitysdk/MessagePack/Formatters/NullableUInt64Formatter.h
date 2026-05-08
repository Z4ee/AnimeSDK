#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A29A280)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A29A200)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A29A2D0)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29A1F0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableUInt64Formatter_TypeDefinitionIndex = 26540;

	class NullableUInt64Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableUInt64Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableUInt64Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableUInt64Formatter_TypeDefinitionIndex)->GetStaticField(0x20820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::UInt64> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::UInt64>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::UInt64> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
