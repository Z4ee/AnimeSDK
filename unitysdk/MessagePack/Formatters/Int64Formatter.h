#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6781C0)
#define MESSAGEPACK_FORMATTERS_INT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6781B0)
#define MESSAGEPACK_FORMATTERS_INT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B678260)
#define MESSAGEPACK_FORMATTERS_INT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6781A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int64Formatter_TypeDefinitionIndex = 7396;

	class Int64Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int64Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int64Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int64Formatter_TypeDefinitionIndex)->GetStaticField(0x2A2D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Int64 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int64, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Int64(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT64FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
