#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E53BAC0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E53BA40)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53BB10)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53BA30)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceUInt64BlockFormatter_TypeDefinitionIndex = 30536;

	class NullableForceUInt64BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceUInt64BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceUInt64BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceUInt64BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x261D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::UInt64> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::UInt64>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::UInt64> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT64BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
