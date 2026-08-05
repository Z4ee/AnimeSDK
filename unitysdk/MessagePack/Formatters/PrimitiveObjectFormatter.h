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

#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZEMAP_OFFSET UNITYSDK_OFFSET(0x1EBB84B0)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBB7CE0)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISINSUPPORTEDCODE_OFFSET UNITYSDK_OFFSET(0x1EBB6910)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1EBB69D0)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBB6B00)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB87F0)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6900)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int PrimitiveObjectFormatter_TypeDefinitionIndex = 30785;

	class PrimitiveObjectFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x25590);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_TypeToJumpCode()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x25598);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInSupportedCode(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISINSUPPORTEDCODE_OFFSET))(type);
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
