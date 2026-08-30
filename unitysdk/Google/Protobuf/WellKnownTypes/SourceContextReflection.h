#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3AF150)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3AF1B0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int SourceContextReflection_TypeDefinitionIndex = 5419;

	class SourceContextReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(SourceContextReflection_TypeDefinitionIndex)->GetStaticField(0x169A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
