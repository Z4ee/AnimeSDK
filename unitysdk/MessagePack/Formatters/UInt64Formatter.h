#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3D650)
#define MESSAGEPACK_FORMATTERS_UINT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3D640)
#define MESSAGEPACK_FORMATTERS_UINT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3D6F0)
#define MESSAGEPACK_FORMATTERS_UINT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3D630)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt64Formatter_TypeDefinitionIndex = 9313;

	class UInt64Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt64Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt64Formatter**)Il2CppClass::FromTypeDefinitionIndex(UInt64Formatter_TypeDefinitionIndex)->GetStaticField(0x214A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt64 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt64, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt64 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt64(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
