#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class String; }

#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667A3A0)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667A2F0)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667A4D0)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667A2E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableStringArrayFormatter_TypeDefinitionIndex = 7431;

	class NullableStringArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableStringArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableStringArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableStringArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x34D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::String*>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::String*>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
