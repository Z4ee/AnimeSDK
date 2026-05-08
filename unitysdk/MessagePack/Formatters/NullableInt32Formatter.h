#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB3410)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB33B0)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADB3450)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB33A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableInt32Formatter_TypeDefinitionIndex = 27124;

	class NullableInt32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableInt32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableInt32Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableInt32Formatter_TypeDefinitionIndex)->GetStaticField(0x207E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Int32> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int32>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Int32> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
