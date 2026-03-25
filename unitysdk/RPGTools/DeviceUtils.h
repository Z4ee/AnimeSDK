#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_DEVICEUTILS_FORMATPOWER_OFFSET UNITYSDK_OFFSET(0x85C3C30)
#define RPGTOOLS_DEVICEUTILS_FORMATSIZE_OFFSET UNITYSDK_OFFSET(0x85C3B00)
#define RPGTOOLS_DEVICEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x85C3DB0)

namespace RPGTools
{
	inline static constexpr unsigned int DeviceUtils_TypeDefinitionIndex = 35146;

	class DeviceUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MESSAGE_BETTERY_CHANGED()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeviceUtils_TypeDefinitionIndex)->GetStaticField(0x18970);
		}
		static ::System::String** StaticGet_MESSAGE_WIFI_RSSI_CHANGED()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeviceUtils_TypeDefinitionIndex)->GetStaticField(0x18978);
		}
		static ::System::String** StaticGet_MESSAGE_WIFI_STATE_CHANGED()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeviceUtils_TypeDefinitionIndex)->GetStaticField(0x18980);
		}
		static ::System::String** StaticGet_MESSAGE_OBJECT_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeviceUtils_TypeDefinitionIndex)->GetStaticField(0x18988);
		}
		// static const ::System::Int32 BATTERY_LEVEL_MAX = 0x64; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* FormatSize(::System::Int64 i)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEUTILS_FORMATSIZE_OFFSET))(i);
		}

		static ::System::String* FormatPower(::System::Double power)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEUTILS_FORMATPOWER_OFFSET))(power);
		}
	};
}
