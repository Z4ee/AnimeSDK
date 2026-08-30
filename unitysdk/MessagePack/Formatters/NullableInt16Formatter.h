#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16679A60)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16679A10)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16679B80)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16679A00)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableInt16Formatter_TypeDefinitionIndex = 7391;

	class NullableInt16Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableInt16Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableInt16Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableInt16Formatter_TypeDefinitionIndex)->GetStaticField(0x34A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::Int16> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int16>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Int16> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT16FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
