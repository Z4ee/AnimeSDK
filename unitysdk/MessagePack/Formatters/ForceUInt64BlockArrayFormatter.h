#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFCCF80)
#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFCCF00)
#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCD850)
#define MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCCEF0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt64BlockArrayFormatter_TypeDefinitionIndex = 29761;

	class ForceUInt64BlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt64BlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt64BlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt64BlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x256B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::UInt64>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt64>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::UInt64>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT64BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
