#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8C420)
#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8C3A0)
#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C630)
#define MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C390)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt16BlockArrayFormatter_TypeDefinitionIndex = 31389;

	class ForceUInt16BlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt16BlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt16BlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt16BlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x25960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::UInt16>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt16>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::UInt16>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::UInt16>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT16BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
