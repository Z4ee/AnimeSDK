#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET UNITYSDK_OFFSET(0x181A4B50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x181C82D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C8340)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x181C8330)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int TypeRegistry_TypeDefinitionIndex = 34050;

	class TypeRegistry : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry** StaticGet__Empty_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry**)Il2CppClass::FromTypeDefinitionIndex(TypeRegistry_TypeDefinitionIndex)->GetStaticField(0x4E900);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* fullNameToMessageMap; // 0x10

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* get_Empty()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_GET_EMPTY_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* Find(::System::String* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_TYPEREGISTRY_FIND_OFFSET))(this, a1);
		}
	};
}
