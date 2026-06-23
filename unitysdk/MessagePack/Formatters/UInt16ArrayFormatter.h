#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7BDE90)
#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7BDE10)
#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDF50)
#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDE00)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt16ArrayFormatter_TypeDefinitionIndex = 29411;

	class UInt16ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt16ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt16ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(UInt16ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x240B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::UInt16>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt16>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::UInt16>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::UInt16>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
