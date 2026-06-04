#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E93190)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E931F0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int StructReflection_TypeDefinitionIndex = 5428;

	class StructReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(StructReflection_TypeDefinitionIndex)->GetStaticField(0x43160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
