#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7255E0)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E725560)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E725750)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E725550)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt32BlockArrayFormatter_TypeDefinitionIndex = 30085;

	class ForceUInt32BlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt32BlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt32BlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt32BlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x25F40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::UInt32>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::UInt32>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
