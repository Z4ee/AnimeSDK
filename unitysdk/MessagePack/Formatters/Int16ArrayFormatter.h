#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D32E20)
#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D32C50)
#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D33010)
#define MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D32C40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int16ArrayFormatter_TypeDefinitionIndex = 9300;

	class Int16ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int16ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int16ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(Int16ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x20EC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Int16>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int16>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Int16>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
