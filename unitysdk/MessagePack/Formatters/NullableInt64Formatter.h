#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181441C0)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x181441A0)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18144300)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18144190)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableInt64Formatter_TypeDefinitionIndex = 7405;

	class NullableInt64Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableInt64Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableInt64Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableInt64Formatter_TypeDefinitionIndex)->GetStaticField(0x8B90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::Int64> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int64>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Int64> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT64FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
