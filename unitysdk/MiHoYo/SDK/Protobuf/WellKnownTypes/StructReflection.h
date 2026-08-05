#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB1E4C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB1E520)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int StructReflection_TypeDefinitionIndex = 29086;

	class StructReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(StructReflection_TypeDefinitionIndex)->GetStaticField(0x246D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
