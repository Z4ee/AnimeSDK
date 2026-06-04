#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E87E80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E87EE0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int AnyReflection_TypeDefinitionIndex = 5416;

	class AnyReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(AnyReflection_TypeDefinitionIndex)->GetStaticField(0x428C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
