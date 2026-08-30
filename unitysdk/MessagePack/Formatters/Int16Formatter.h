#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_INT16FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x166742F0)
#define MESSAGEPACK_FORMATTERS_INT16FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x166742E0)
#define MESSAGEPACK_FORMATTERS_INT16FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16674390)
#define MESSAGEPACK_FORMATTERS_INT16FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x166742D0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Int16Formatter_TypeDefinitionIndex = 7390;

	class Int16Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int16Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int16Formatter**)Il2CppClass::FromTypeDefinitionIndex(Int16Formatter_TypeDefinitionIndex)->GetStaticField(0x346E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Int16 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int16, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int16 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Int16(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT16FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
