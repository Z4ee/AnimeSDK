#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C28B4F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C28B550)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorReflection_TypeDefinitionIndex = 26000;

	class DescriptorReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(DescriptorReflection_TypeDefinitionIndex)->GetStaticField(0x1F1E0);
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
