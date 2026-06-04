#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4EDC0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4EE20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorReflection_TypeDefinitionIndex = 5455;

	class DescriptorReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(DescriptorReflection_TypeDefinitionIndex)->GetStaticField(0x3D410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
