#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB29750)
#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB296D0)
#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB298C0)
#define MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB296C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceInt64BlockArrayFormatter_TypeDefinitionIndex = 29949;

	class ForceInt64BlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceInt64BlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceInt64BlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceInt64BlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x260F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Int64>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int64>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Int64>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT64BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
