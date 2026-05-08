#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4AE8F0)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4AE890)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE930)
#define MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE880)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableForceInt32BlockFormatter_TypeDefinitionIndex = 26556;

	class NullableForceInt32BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableForceInt32BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableForceInt32BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableForceInt32BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x1FFA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Int32> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Int32>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Int32> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEFORCEINT32BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
