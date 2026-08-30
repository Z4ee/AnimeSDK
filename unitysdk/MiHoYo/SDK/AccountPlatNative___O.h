#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatNative_HoYoSDKNativeCallback; }
namespace MiHoYo::SDK { class AccountPlatNative_HoYoSDKNotification; }
namespace MiHoYo::SDK { class AccountPlatNative_HoYoSDKPluginUICallback; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___O_TypeDefinitionIndex = 46541;

	class AccountPlatNative___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatNative_HoYoSDKPluginUICallback** StaticGet__1___HoYoSDKInternalPluginUICallback()
		{
			return (::MiHoYo::SDK::AccountPlatNative_HoYoSDKPluginUICallback**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___O_TypeDefinitionIndex)->GetStaticField(0x42DE0);
		}
		static ::MiHoYo::SDK::AccountPlatNative_HoYoSDKNotification** StaticGet__0___HoYoSDKInternalNotification()
		{
			return (::MiHoYo::SDK::AccountPlatNative_HoYoSDKNotification**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___O_TypeDefinitionIndex)->GetStaticField(0x42DE8);
		}
		static ::MiHoYo::SDK::AccountPlatNative_HoYoSDKNativeCallback** StaticGet__2___HoYoSDKInternalCallback()
		{
			return (::MiHoYo::SDK::AccountPlatNative_HoYoSDKNativeCallback**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___O_TypeDefinitionIndex)->GetStaticField(0x42DF0);
		}
	};
}
