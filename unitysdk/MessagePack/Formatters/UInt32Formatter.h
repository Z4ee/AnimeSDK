#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F77DE0)
#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F77DD0)
#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F77E80)
#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F77DC0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt32Formatter_TypeDefinitionIndex = 7416;

	class UInt32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt32Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt32Formatter_TypeDefinitionIndex)->GetStaticField(0x9630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::UInt32 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
