#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class DynamicObjectTypeFallbackFormatter_SerializeMethod; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }

#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813C1D0)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813AFE0)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813C300)
#define MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1813AFD0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex = 7381;

	class DynamicObjectTypeFallbackFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex)->GetStaticField(0x8850);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::DynamicObjectTypeFallbackFormatter_SerializeMethod*>** StaticGet_SerializerDelegates()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::DynamicObjectTypeFallbackFormatter_SerializeMethod*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeFallbackFormatter_TypeDefinitionIndex)->GetStaticField(0x8858);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Object* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
