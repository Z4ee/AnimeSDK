#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___O_TypeDefinitionIndex = 46984;

	class HoYoChannelInterface___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__11___OnQueryCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x498F0);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnAuthTokenCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x498F8);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_LogHandler** StaticGet__0___LogHandler()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_LogHandler**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49900);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__7___OnConsumeCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49908);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnEntitlementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49910);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnCheckoutCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49918);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnInitCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49920);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__9___OnGameOverlayCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49928);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__8___OnMicroTxnCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49930);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnProductsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49938);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLoginCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49940);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__10___OnAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0x49948);
		}
	};
}
