#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1C6E3CB0)
#define MIHOYO_SDK_HOYOCHANNELSDK_ACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C6E3E90)
#define MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1C6D7240)
#define MIHOYO_SDK_HOYOCHANNELSDK_BLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1C6E3B70)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1C6D9E20)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1C6D8F80)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1C6E32A0)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1C6E2410)
#define MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET UNITYSDK_OFFSET(0x1C6DACC0)
#define MIHOYO_SDK_HOYOCHANNELSDK_FRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1C6E3AD0)
#define MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET UNITYSDK_OFFSET(0x1C6D5C60)
#define MIHOYO_SDK_HOYOCHANNELSDK_INVITE_OFFSET UNITYSDK_OFFSET(0x1C6E3F30)
#define MIHOYO_SDK_HOYOCHANNELSDK_LEADERBOARD_OFFSET UNITYSDK_OFFSET(0x1C6E3DF0)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C6D63A0)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET UNITYSDK_OFFSET(0x1C6D2790)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x1C6D80E0)
#define MIHOYO_SDK_HOYOCHANNELSDK_QUERY_OFFSET UNITYSDK_OFFSET(0x1C6E05E0)
#define MIHOYO_SDK_HOYOCHANNELSDK_RECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0x1C6E3FD0)
#define MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6DB990)
#define MIHOYO_SDK_HOYOCHANNELSDK_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1C6E2B50)
#define MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1C6D2820)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1C6E3A30)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWMESSAGEDIALOG_OFFSET UNITYSDK_OFFSET(0x1C6E3990)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWPROFILECARD_OFFSET UNITYSDK_OFFSET(0x1C6E38F0)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWTEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1C6E3850)
#define MIHOYO_SDK_HOYOCHANNELSDK_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C6E3D50)
#define MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET UNITYSDK_OFFSET(0x1C6D5700)
#define MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6DC060)
#define MIHOYO_SDK_HOYOCHANNELSDK_USERPROFILE_OFFSET UNITYSDK_OFFSET(0x1C6E3C10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_TypeDefinitionIndex = 47004;

	class HoYoChannelSDK : public ::System::Object
	{
	public:
		// static const ::System::String* DllName; // 0x0

		static ::System::Void Init(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void Login(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET))(a1, a2);
		}

		static ::System::Void AuthToken(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Void Products(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET))(a1, a2);
		}

		static ::System::Void Checkout(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET))(a1, a2);
		}

		static ::System::Void CheckEntitlements(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET))(a1, a2);
		}

		static ::System::Void Consume(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCallback(::System::Int32 a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void UnregisterCallback(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET))();
		}

		static ::System::Void SetLogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogHandler* a1, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogHandler*, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void Print(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET))(a1);
		}

		static ::System::Void Query(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_QUERY_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPrivilege(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKPRIVILEGE_OFFSET))(a1, a2);
		}

		static ::System::Void ResolvePrivilege(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_RESOLVEPRIVILEGE_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPermission(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKPERMISSION_OFFSET))(a1, a2);
		}

		static ::System::Void ShowTextEntry(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWTEXTENTRY_OFFSET))(a1, a2);
		}

		static ::System::Void ShowProfileCard(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWPROFILECARD_OFFSET))(a1, a2);
		}

		static ::System::Void ShowMessageDialog(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWMESSAGEDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Void ShowErrorDialog(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWERRORDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Void FriendList(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_FRIENDLIST_OFFSET))(a1, a2);
		}

		static ::System::Void BlockList(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_BLOCKLIST_OFFSET))(a1, a2);
		}

		static ::System::Void UserProfile(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_USERPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void Achievements(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_ACHIEVEMENTS_OFFSET))(a1, a2);
		}

		static ::System::Void Statistics(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_STATISTICS_OFFSET))(a1, a2);
		}

		static ::System::Void Leaderboard(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LEADERBOARD_OFFSET))(a1, a2);
		}

		static ::System::Void Activity(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_ACTIVITY_OFFSET))(a1, a2);
		}

		static ::System::Void Invite(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_INVITE_OFFSET))(a1, a2);
		}

		static ::System::Void RecentPlayers(::System::String* a1, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_RECENTPLAYERS_OFFSET))(a1, a2);
		}
	};
}
