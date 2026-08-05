#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9C2150)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C21B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorReflection_TypeDefinitionIndex = 29098;

	class DescriptorReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(DescriptorReflection_TypeDefinitionIndex)->GetStaticField(0x24580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
