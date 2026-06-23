#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F74D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F7530)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int TimestampReflection_TypeDefinitionIndex = 28491;

	class TimestampReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(TimestampReflection_TypeDefinitionIndex)->GetStaticField(0x23370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMPREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
