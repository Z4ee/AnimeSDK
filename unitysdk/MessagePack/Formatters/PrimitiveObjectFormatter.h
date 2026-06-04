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

#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZEMAP_OFFSET UNITYSDK_OFFSET(0x18146DE0)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18146180)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1813C060)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18144F30)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18147060)
#define MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18144F20)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int PrimitiveObjectFormatter_TypeDefinitionIndex = 7436;

	class PrimitiveObjectFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_TypeToJumpCode()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectFormatter_TypeDefinitionIndex)->GetStaticField(0x8848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsSupportedType(::System::Type* a1, ::System::Reflection::TypeInfo* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::TypeInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_ISSUPPORTEDTYPE_OFFSET))(a1, a2, a3);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Object* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Object* DeserializeMap(::MessagePack::MessagePackReader& a1, ::System::Int32 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::Int32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_PRIMITIVEOBJECTFORMATTER_DESERIALIZEMAP_OFFSET))(this, a1, a2, a3);
		}
	};
}
