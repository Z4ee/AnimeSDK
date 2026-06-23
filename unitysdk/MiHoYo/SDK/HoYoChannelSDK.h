#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1C4D0A80)
#define MIHOYO_SDK_HOYOCHANNELSDK_ACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C4D0C60)
#define MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1C4CFDD0)
#define MIHOYO_SDK_HOYOCHANNELSDK_BLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1C4D0940)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1C4CFFB0)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1C4CFF10)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1C4D0580)
#define MIHOYO_SDK_HOYOCHANNELSDK_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1C4D0440)
#define MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET UNITYSDK_OFFSET(0x1C4D0050)
#define MIHOYO_SDK_HOYOCHANNELSDK_FRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1C4D08A0)
#define MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET UNITYSDK_OFFSET(0x1C4CFC90)
#define MIHOYO_SDK_HOYOCHANNELSDK_INVITE_OFFSET UNITYSDK_OFFSET(0x1C4D0D00)
#define MIHOYO_SDK_HOYOCHANNELSDK_LEADERBOARD_OFFSET UNITYSDK_OFFSET(0x1C4D0BC0)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C4CFD30)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET UNITYSDK_OFFSET(0x1C4D0310)
#define MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x1C4CFE70)
#define MIHOYO_SDK_HOYOCHANNELSDK_QUERY_OFFSET UNITYSDK_OFFSET(0x1C4D03A0)
#define MIHOYO_SDK_HOYOCHANNELSDK_RECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0x1C4D0DA0)
#define MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C4D00F0)
#define MIHOYO_SDK_HOYOCHANNELSDK_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1C4D04E0)
#define MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET UNITYSDK_OFFSET(0x1C4D0280)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1C4D0800)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWMESSAGEDIALOG_OFFSET UNITYSDK_OFFSET(0x1C4D0760)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWPROFILECARD_OFFSET UNITYSDK_OFFSET(0x1C4D06C0)
#define MIHOYO_SDK_HOYOCHANNELSDK_SHOWTEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1C4D0620)
#define MIHOYO_SDK_HOYOCHANNELSDK_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C4D0B20)
#define MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET UNITYSDK_OFFSET(0x1C4D0200)
#define MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C4D0180)
#define MIHOYO_SDK_HOYOCHANNELSDK_USERPROFILE_OFFSET UNITYSDK_OFFSET(0x1C4D09E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_TypeDefinitionIndex = 36928;

	class HoYoChannelSDK : public ::System::Object
	{
	public:
		// static const ::System::String* DllName; // 0x0

		static ::System::Void Init(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_INIT_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Login(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGIN_OFFSET))(jsonParams, callback);
		}

		static ::System::Void AuthToken(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_AUTHTOKEN_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Products(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRODUCTS_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Checkout(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKOUT_OFFSET))(jsonParams, callback);
		}

		static ::System::Void CheckEntitlements(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKENTITLEMENTS_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Consume(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CONSUME_OFFSET))(jsonParams, callback);
		}

		static ::System::Void RegisterCallback(::System::Int32 callbackType, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_REGISTERCALLBACK_OFFSET))(callbackType, callback);
		}

		static ::System::Void UnregisterCallback(::System::Int32 callbackType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_UNREGISTERCALLBACK_OFFSET))(callbackType);
		}

		static ::System::Void Tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_TICK_OFFSET))();
		}

		static ::System::Void SetLogHandler(::MiHoYo::SDK::HoYoChannelSDK_LogHandler* handler, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel minLogLevel)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoChannelSDK_LogHandler*, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SETLOGHANDLER_OFFSET))(handler, minLogLevel);
		}

		static ::System::Void Print(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_PRINT_OFFSET))(message);
		}

		static ::System::Void Query(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_QUERY_OFFSET))(jsonParams, callback);
		}

		static ::System::Void CheckPrivilege(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKPRIVILEGE_OFFSET))(jsonParams, callback);
		}

		static ::System::Void ResolvePrivilege(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_RESOLVEPRIVILEGE_OFFSET))(jsonParams, callback);
		}

		static ::System::Void CheckPermission(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CHECKPERMISSION_OFFSET))(jsonParams, callback);
		}

		static ::System::Void ShowTextEntry(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWTEXTENTRY_OFFSET))(jsonParams, callback);
		}

		static ::System::Void ShowProfileCard(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWPROFILECARD_OFFSET))(jsonParams, callback);
		}

		static ::System::Void ShowMessageDialog(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWMESSAGEDIALOG_OFFSET))(jsonParams, callback);
		}

		static ::System::Void ShowErrorDialog(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_SHOWERRORDIALOG_OFFSET))(jsonParams, callback);
		}

		static ::System::Void FriendList(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_FRIENDLIST_OFFSET))(jsonParams, callback);
		}

		static ::System::Void BlockList(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_BLOCKLIST_OFFSET))(jsonParams, callback);
		}

		static ::System::Void UserProfile(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_USERPROFILE_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Achievements(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_ACHIEVEMENTS_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Statistics(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_STATISTICS_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Leaderboard(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LEADERBOARD_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Activity(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_ACTIVITY_OFFSET))(jsonParams, callback);
		}

		static ::System::Void Invite(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_INVITE_OFFSET))(jsonParams, callback);
		}

		static ::System::Void RecentPlayers(::System::String* jsonParams, ::MiHoYo::SDK::HoYoChannelSDK_CallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::HoYoChannelSDK_CallBack*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_RECENTPLAYERS_OFFSET))(jsonParams, callback);
		}
	};
}
