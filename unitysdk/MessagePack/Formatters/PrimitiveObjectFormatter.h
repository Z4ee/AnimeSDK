#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZEMAP_OFFSET UNITYSDK_OFFSET(0x15D3AE60)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D3A240)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x15D2FC40)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D39150)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3B0D0)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D39140)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int PrimitiveObjectFormatter_TypeDefinitionIndex = 9336;

	class PrimitiveObjectFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x20E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_TypeToJumpCode()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x20E78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsSupportedType(::System::Type* type, ::System::Reflection::TypeInfo* typeInfo, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::TypeInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISSUPPORTEDTYPE_OFFSET))(type, typeInfo, value);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Object* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}

		::System::Object* DeserializeMap(::MessagePack::MessagePackReader& reader, ::System::Int32 length, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::Int32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZEMAP_OFFSET))(this, reader, length, options);
		}
	};
}
