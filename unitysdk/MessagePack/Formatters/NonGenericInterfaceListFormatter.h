#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class IList; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67C170)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67BA20)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B67C5B0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67BA10)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceListFormatter_TypeDefinitionIndex = 7349;

	class NonGenericInterfaceListFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IList*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IList*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceListFormatter_TypeDefinitionIndex)->GetStaticField(0x2A5A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Collections::IList* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::IList*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IList* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
