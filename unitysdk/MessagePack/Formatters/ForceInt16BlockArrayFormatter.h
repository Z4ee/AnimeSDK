#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7FF9C0)
#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7FF940)
#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7FFB30)
#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FF930)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceInt16BlockArrayFormatter_TypeDefinitionIndex = 29540;

	class ForceInt16BlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceInt16BlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceInt16BlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceInt16BlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x23D00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Int16>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int16>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Int16>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
