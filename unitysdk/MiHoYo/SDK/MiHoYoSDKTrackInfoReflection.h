#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA1B8920)
#define MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1B8980)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKTrackInfoReflection_TypeDefinitionIndex = 43772;

	class MiHoYoSDKTrackInfoReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKTrackInfoReflection_TypeDefinitionIndex)->GetStaticField(0xCA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}
	};
}
