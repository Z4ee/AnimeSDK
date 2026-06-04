#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181438D0)
#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18143880)
#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181439F0)
#define MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18143870)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableCharFormatter_TypeDefinitionIndex = 7431;

	class NullableCharFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableCharFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableCharFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableCharFormatter_TypeDefinitionIndex)->GetStaticField(0x8B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::Char> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Char>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Char> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::Char>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLECHARFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
