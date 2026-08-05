#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC39580)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC395E0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int DurationReflection_TypeDefinitionIndex = 29080;

	class DurationReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(DurationReflection_TypeDefinitionIndex)->GetStaticField(0x247F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATIONREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
