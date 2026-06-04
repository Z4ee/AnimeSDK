#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class ICollection; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18141080)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18140B20)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18141440)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18140B10)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex = 7355;

	class NonGenericInterfaceCollectionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::ICollection*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::ICollection*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex)->GetStaticField(0x8A20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Collections::ICollection* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::ICollection*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::ICollection* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
