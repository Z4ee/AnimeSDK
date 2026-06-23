#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class String; }

#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D34A6E0)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D34A660)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D34A7A0)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34A650)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableStringArrayFormatter_TypeDefinitionIndex = 30704;

	class NullableStringArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableStringArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableStringArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableStringArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x244B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::String*>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::String*>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::String*>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
