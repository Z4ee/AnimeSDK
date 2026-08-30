#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions___O_TypeDefinitionIndex = 47019;

	class HoYoChannelSystemFunctions___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__0___OnShowTextEntryCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions___O_TypeDefinitionIndex)->GetStaticField(0x51C20);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnShowMessageDialogCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions___O_TypeDefinitionIndex)->GetStaticField(0x51C28);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnShowErrorDialogCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions___O_TypeDefinitionIndex)->GetStaticField(0x51C30);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnShowProfileCardCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions___O_TypeDefinitionIndex)->GetStaticField(0x51C38);
		}
	};
}
