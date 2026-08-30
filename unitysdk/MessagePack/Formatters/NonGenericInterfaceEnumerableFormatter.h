#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class IEnumerable; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67B590)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67AA10)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B67B9D0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67AA00)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceEnumerableFormatter_TypeDefinitionIndex = 7348;

	class NonGenericInterfaceEnumerableFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IEnumerable*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IEnumerable*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceEnumerableFormatter_TypeDefinitionIndex)->GetStaticField(0x2A420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Collections::IEnumerable* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::IEnumerable*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerable* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEENUMERABLEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
