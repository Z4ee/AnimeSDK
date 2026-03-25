#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class ICollection; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D351D0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D34CB0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D355E0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D34CA0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex = 9255;

	class NonGenericInterfaceCollectionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::ICollection*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::ICollection*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex)->GetStaticField(0x20FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Collections::ICollection* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::ICollection*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Collections::ICollection* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
