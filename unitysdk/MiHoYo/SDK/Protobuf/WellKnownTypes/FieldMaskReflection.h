#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9A2FE0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9A3040)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMaskReflection_TypeDefinitionIndex = 29083;

	class FieldMaskReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(FieldMaskReflection_TypeDefinitionIndex)->GetStaticField(0x24660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
