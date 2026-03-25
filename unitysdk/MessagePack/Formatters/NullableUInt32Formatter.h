#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D38DD0)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D38DB0)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D38EF0)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D38DA0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableUInt32Formatter_TypeDefinitionIndex = 9311;

	class NullableUInt32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableUInt32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableUInt32Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableUInt32Formatter_TypeDefinitionIndex)->GetStaticField(0x21280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::UInt32> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::UInt32>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::UInt32> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
