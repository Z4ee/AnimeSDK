#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET UNITYSDK_OFFSET(0x1739AA40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x173BDFE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BE050)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x173BE040)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int TypeRegistry_TypeDefinitionIndex = 33768;

	class TypeRegistry : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry** StaticGet__Empty_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry**)Il2CppClass::FromTypeDefinitionIndex(TypeRegistry_TypeDefinitionIndex)->GetStaticField(0x695D0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap; // 0x10

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CTOR_OFFSET))(this, fullNameToMessageMap);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* get_Empty()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* Find(::System::String* fullName)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET))(this, fullName);
		}
	};
}
