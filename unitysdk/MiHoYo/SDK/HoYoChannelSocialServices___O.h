#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSocialServices___O_TypeDefinitionIndex = 47011;

	class HoYoChannelSocialServices___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnSocialUpdateCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices___O_TypeDefinitionIndex)->GetStaticField(0x47300);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnUserProfileCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices___O_TypeDefinitionIndex)->GetStaticField(0x47308);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__0___OnFriendListCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices___O_TypeDefinitionIndex)->GetStaticField(0x47310);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnBlockListCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices___O_TypeDefinitionIndex)->GetStaticField(0x47318);
		}
	};
}
