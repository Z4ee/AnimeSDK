#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET UNITYSDK_OFFSET(0x17121010)
#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x17120FA0)
#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x171210C0)
#define GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17121000)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int TypeRegistry_TypeDefinitionIndex = 6374;

	class TypeRegistry : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::TypeRegistry** StaticGet__Empty_k__BackingField()
		{
			return (::Google::Protobuf::Reflection::TypeRegistry**)Il2CppClass::FromTypeDefinitionIndex(TypeRegistry_TypeDefinitionIndex)->GetStaticField(0x4530);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Google::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap; // 0x10

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::Google::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Google::Protobuf::Reflection::MessageDescriptor*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY__CTOR_OFFSET))(this, fullNameToMessageMap);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::TypeRegistry* get_Empty()
		{
			return ((::Google::Protobuf::Reflection::TypeRegistry*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* Find(::System::String* fullName)
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET))(this, fullName);
		}
	};
}
