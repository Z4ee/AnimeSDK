#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBE340)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBE380)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x15DBE390)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto___c_TypeDefinitionIndex = 28068;

	class ServiceDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x22760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET))(this);
		}
	};
}
