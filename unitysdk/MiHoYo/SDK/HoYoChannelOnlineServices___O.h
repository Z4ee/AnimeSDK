#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelOnlineServices___O_TypeDefinitionIndex = 46999;

	class HoYoChannelOnlineServices___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__0___OnCheckPrivilegeCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices___O_TypeDefinitionIndex)->GetStaticField(0x51740);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnResolvePrivilegeCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices___O_TypeDefinitionIndex)->GetStaticField(0x51748);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnCheckPermissionCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices___O_TypeDefinitionIndex)->GetStaticField(0x51750);
		}
	};
}
