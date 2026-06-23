#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C621610)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C621590)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C621660)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C621580)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceInt64BlockFormatter_TypeDefinitionIndex = 30534;

	class NullableForceInt64BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceInt64BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceInt64BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceInt64BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x238C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Int64> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int64>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Int64> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT64BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
