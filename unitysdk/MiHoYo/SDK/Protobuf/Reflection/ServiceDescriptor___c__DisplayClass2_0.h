#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptor; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196C55D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x196C5620)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptor___c__DisplayClass2_0_TypeDefinitionIndex = 34418;

	class ServiceDescriptor___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor* __4__this; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptor* __ctor_b__0(::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}
	};
}
