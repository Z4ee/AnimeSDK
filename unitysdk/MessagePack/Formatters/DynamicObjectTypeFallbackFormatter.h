#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class DynamicObjectTypeFallbackFormatter_SerializeMethod; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }

#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB28F90)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB27D50)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB290C0)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB27D40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex = 31338;

	class DynamicObjectTypeFallbackFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::DynamicObjectTypeFallbackFormatter_SerializeMethod*>** StaticGet_SerializerDelegates()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::DynamicObjectTypeFallbackFormatter_SerializeMethod*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex)->GetStaticField(0x25EA0);
		}
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex)->GetStaticField(0x25EA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Object* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
