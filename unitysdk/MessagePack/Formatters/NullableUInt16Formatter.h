#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E8BD1C0)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E8BD170)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BD1F0)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BD160)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableUInt16Formatter_TypeDefinitionIndex = 30607;

	class NullableUInt16Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableUInt16Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableUInt16Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableUInt16Formatter_TypeDefinitionIndex)->GetStaticField(0x25C60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::UInt16> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::UInt16>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::UInt16> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::UInt16>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT16FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
