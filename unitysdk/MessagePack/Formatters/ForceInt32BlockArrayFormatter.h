#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7FFC00)
#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7FFB80)
#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7FFD70)
#define MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FFB70)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceInt32BlockArrayFormatter_TypeDefinitionIndex = 30519;

	class ForceInt32BlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceInt32BlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceInt32BlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceInt32BlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x23D10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Int32>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Int32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Int32>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT32BLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
