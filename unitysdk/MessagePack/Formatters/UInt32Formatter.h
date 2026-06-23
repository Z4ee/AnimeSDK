#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D81F5A0)
#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D81F590)
#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D81F5B0)
#define MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F580)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt32Formatter_TypeDefinitionIndex = 30262;

	class UInt32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt32Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt32Formatter_TypeDefinitionIndex)->GetStaticField(0x242B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt32 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt32 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
