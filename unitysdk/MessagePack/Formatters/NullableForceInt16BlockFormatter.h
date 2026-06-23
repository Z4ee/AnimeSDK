#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D81F4A0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D81F450)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D81F4D0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F440)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceInt16BlockFormatter_TypeDefinitionIndex = 30515;

	class NullableForceInt16BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceInt16BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceInt16BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceInt16BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x248D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Int16> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int16>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Int16> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT16BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
