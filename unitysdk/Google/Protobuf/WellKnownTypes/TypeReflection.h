#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E965D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E96630)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int TypeReflection_TypeDefinitionIndex = 5440;

	class TypeReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(TypeReflection_TypeDefinitionIndex)->GetStaticField(0x432E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
