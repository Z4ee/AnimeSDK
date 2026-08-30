#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC8C80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC8CE0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int StructReflection_TypeDefinitionIndex = 5422;

	class StructReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(StructReflection_TypeDefinitionIndex)->GetStaticField(0x190F0);
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
