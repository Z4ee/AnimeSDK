#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E53B9C0)
#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E53B970)
#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53B9F0)
#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53B960)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableCharFormatter_TypeDefinitionIndex = 30107;

	class NullableCharFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableCharFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableCharFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableCharFormatter_TypeDefinitionIndex)->GetStaticField(0x25CE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Char> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Char>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Char> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Char>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
