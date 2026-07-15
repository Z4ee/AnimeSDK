#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SteamDelegate_GetNickNameDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_GetSteamIdDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_GetTicketDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_RegisterCallbackDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_SetAppIdDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_STEAMDELEGATE_DEDUCT_OFFSET UNITYSDK_OFFSET(0x1712D2D0)
#define MIHOYO_SDK_STEAMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1712D330)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_TypeDefinitionIndex = 7641;

	class SteamDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SteamDelegate_GetTicketDelegate** StaticGet_GetTicket()
		{
			return (::MiHoYo::SDK::SteamDelegate_GetTicketDelegate**)Il2CppClass::FromTypeDefinitionIndex(SteamDelegate_TypeDefinitionIndex)->GetStaticField(0x30570);
		}
		static ::MiHoYo::SDK::SteamDelegate_SetAppIdDelegate** StaticGet_SetAppId()
		{
			return (::MiHoYo::SDK::SteamDelegate_SetAppIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(SteamDelegate_TypeDefinitionIndex)->GetStaticField(0x30578);
		}
		static ::MiHoYo::SDK::SteamDelegate_GetSteamIdDelegate** StaticGet_GetSteamId()
		{
			return (::MiHoYo::SDK::SteamDelegate_GetSteamIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(SteamDelegate_TypeDefinitionIndex)->GetStaticField(0x30580);
		}
		static ::MiHoYo::SDK::SteamDelegate_RegisterCallbackDelegate** StaticGet_RegisterCallback()
		{
			return (::MiHoYo::SDK::SteamDelegate_RegisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(SteamDelegate_TypeDefinitionIndex)->GetStaticField(0x30588);
		}
		static ::MiHoYo::SDK::SteamDelegate_GetNickNameDelegate** StaticGet_GetNickName()
		{
			return (::MiHoYo::SDK::SteamDelegate_GetNickNameDelegate**)Il2CppClass::FromTypeDefinitionIndex(SteamDelegate_TypeDefinitionIndex)->GetStaticField(0x30590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Deduct(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_DEDUCT_OFFSET))(a1);
		}
	};
}
