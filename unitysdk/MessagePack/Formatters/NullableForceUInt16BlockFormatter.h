#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D6E3C80)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D6E3C30)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3CB0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3C20)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceUInt16BlockFormatter_TypeDefinitionIndex = 29238;

	class NullableForceUInt16BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceUInt16BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceUInt16BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceUInt16BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x24C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::UInt16> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::UInt16>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::UInt16> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::UInt16>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEUINT16BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
