#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3CC30)
#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3CC20)
#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3CCD0)
#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3CC10)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt16Formatter_TypeDefinitionIndex = 9307;

	class UInt16Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt16Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt16Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt16Formatter_TypeDefinitionIndex)->GetStaticField(0x21440);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt16 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt16, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt16 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt16(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
