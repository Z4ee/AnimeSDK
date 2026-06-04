#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813ECB0)
#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813EAF0)
#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813EEA0)
#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1813EAE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int16ArrayFormatter_TypeDefinitionIndex = 7400;

	class Int16ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int16ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int16ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int16ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x8950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Il2CppArray<::System::Int16>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int16>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Int16>* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
