#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C2C14F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2C1550)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int AnyReflection_TypeDefinitionIndex = 25979;

	class AnyReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(AnyReflection_TypeDefinitionIndex)->GetStaticField(0x1F5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
