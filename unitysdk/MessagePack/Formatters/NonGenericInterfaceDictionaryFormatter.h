#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class IDictionary; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16676FB0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16676AF0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x166774F0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16676AE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceDictionaryFormatter_TypeDefinitionIndex = 7351;

	class NonGenericInterfaceDictionaryFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IDictionary*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IDictionary*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceDictionaryFormatter_TypeDefinitionIndex)->GetStaticField(0x348A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Collections::IDictionary* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::IDictionary*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IDictionary* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
