#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class String; }

#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18144970)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18144960)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18144980)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18144950)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableStringFormatter_TypeDefinitionIndex = 7438;

	class NullableStringFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableStringFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableStringFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableStringFormatter_TypeDefinitionIndex)->GetStaticField(0x8C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::String* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::String*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::String*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
