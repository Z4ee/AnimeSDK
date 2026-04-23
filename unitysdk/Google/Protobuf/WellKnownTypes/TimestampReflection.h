#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17135040)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x171350A0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int TimestampReflection_TypeDefinitionIndex = 6235;

	class TimestampReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(TimestampReflection_TypeDefinitionIndex)->GetStaticField(0x5420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
