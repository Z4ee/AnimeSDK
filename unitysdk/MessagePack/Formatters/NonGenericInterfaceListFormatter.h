#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class IList; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7BDA00)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7BD500)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDD50)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BD4F0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceListFormatter_TypeDefinitionIndex = 29991;

	class NonGenericInterfaceListFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IList*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IList*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceListFormatter_TypeDefinitionIndex)->GetStaticField(0x24090);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Collections::IList* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::IList*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Collections::IList* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACELISTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
