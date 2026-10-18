#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___O_TypeDefinitionIndex = 46508;

	class HoYoChannelGameplayServices___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnInviteCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20760);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20768);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnStatisticsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20770);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLeaderboardCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20778);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnRecentPlayersCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20780);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnActivityCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20788);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__0___OnAchievementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices___O_TypeDefinitionIndex)->GetStaticField(0x20790);
		}
	};
}
