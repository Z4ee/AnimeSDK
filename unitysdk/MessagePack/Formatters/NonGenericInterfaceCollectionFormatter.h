#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class ICollection; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17332BC0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x173326A0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17332FD0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACECOLLECTIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17332690)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex = 9452;

	class NonGenericInterfaceCollectionFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::ICollection*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::ICollection*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceCollectionFormatter_TypeDefinitionIndex)->GetStaticField(0x41BE0);
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
