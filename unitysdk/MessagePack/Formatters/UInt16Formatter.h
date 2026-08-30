#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667E7E0)
#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667E7D0)
#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667E880)
#define MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1667E7C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt16Formatter_TypeDefinitionIndex = 7399;

	class UInt16Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt16Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt16Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt16Formatter_TypeDefinitionIndex)->GetStaticField(0x355B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::UInt16 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt16, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt16 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::UInt16(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
