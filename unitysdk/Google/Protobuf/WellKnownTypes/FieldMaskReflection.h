#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1712FAD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1712FB30)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMaskReflection_TypeDefinitionIndex = 6220;

	class FieldMaskReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(FieldMaskReflection_TypeDefinitionIndex)->GetStaticField(0x5070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
