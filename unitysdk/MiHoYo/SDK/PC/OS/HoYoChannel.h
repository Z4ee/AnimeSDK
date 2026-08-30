#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelShowTextEntryInputScope.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA0F930)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKMULTIPLAYERPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1BA0F430)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1BA115A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1BA111F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CREATECONSOLERESULT_OFFSET UNITYSDK_OFFSET(0x1BA0F340)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_DELETEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1BA15F10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSUREINVITERECEIVEDREGISTERED_OFFSET UNITYSDK_OFFSET(0x1BA17AC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSURESOCIALUPDATEREGISTERED_OFFSET UNITYSDK_OFFSET(0x1BA12C10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACCOUNTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x1BA18DC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA132C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1BA16130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETBLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1BA12310)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET UNITYSDK_OFFSET(0x1BA18C00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1BA12120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETLEADERBOARD_OFFSET UNITYSDK_OFFSET(0x1BA149E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x1BA18DB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1BA13AC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1BA18DA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1BA18D90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERPROFILE_OFFSET UNITYSDK_OFFSET(0x1BA12510)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B9ECE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_HASJOINSESSION_OFFSET UNITYSDK_OFFSET(0x1BA166A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISHANDHELD_OFFSET UNITYSDK_OFFSET(0x1BA18CF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET UNITYSDK_OFFSET(0x1BA19760)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BA18D00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1BA18DD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1BA1A1C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x1BA17530)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONRESOLVEPRIVILEGERESULT_OFFSET UNITYSDK_OFFSET(0x1BA0F590)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONSOCIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA128B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_QUERY_OFFSET UNITYSDK_OFFSET(0x1BA18C60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERBLOCKUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA13040)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERFRIENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA12F40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA17C90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA12700)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESET_OFFSET UNITYSDK_OFFSET(0x1BA1A1D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1BA11360)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA16C40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITE_OFFSET UNITYSDK_OFFSET(0x1BA16A90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA151B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITY_OFFSET UNITYSDK_OFFSET(0x1BA15000)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA10AA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWMESSAGEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA0FDF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWPROFILECARD_OFFSET UNITYSDK_OFFSET(0x1BA0FC00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA168D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITE_OFFSET UNITYSDK_OFFSET(0x1BA16730)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_1_OFFSET UNITYSDK_OFFSET(0x1BA195B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1BA0F710)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_TRYRELEASESOCIALUPDATESUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BA13180)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERBLOCKUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA13280)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERFRIENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA13140)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA17D90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATEACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x1BA134E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATERECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0x1BA17ED0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1BA14230)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA1A1F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1A1E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel_TypeDefinitionIndex = 8452;

	class HoYoChannel : public ::System::Object
	{
	public:
		static ::System::Action_3<::System::Int32, ::System::String*, ::System::Int32>** StaticGet__onResolvePrivilege()
		{
			return (::System::Action_3<::System::Int32, ::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x1E660);
		}
		static ::System::Action_1<::System::String*>** StaticGet__friendUpdateCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x1E668);
		}
		static ::System::Action_1<::System::String*>** StaticGet__blockUpdateCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x1E670);
		}
		static ::System::Action_1<::System::String*>** StaticGet__inviteReceivedCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x1E678);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannel** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannel**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x1E680);
		}
		static ::System::Int32* StaticGet__thirdErrorCode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA340);
		}
		static ::System::Boolean* StaticGet__hasJoinSession()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA344);
		}
		static ::System::Boolean* StaticGet__isInviteReceivedRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA345);
		}
		static ::System::Boolean* StaticGet__isSocialUpdateRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA346);
		}
		// static const ::System::Int32 MULTIPLAYER_PRIVILEGE = 0xFE; // 0x0
		// static const ::System::String* SocialRelationshipsChangedEvent; // 0x0
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::Int32 RESULT_TIMEOUT = 0x80000000; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::JSONObject* CreateConsoleResult(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CREATECONSOLERESULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckMultiplayerPrivilege()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKMULTIPLAYERPRIVILEGE_OFFSET))();
		}

		static ::System::Void OnResolvePrivilegeResult(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONRESOLVEPRIVILEGERESULT_OFFSET))(a1);
		}

		static ::System::Void ShowVirtualKeyboard(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShowProfileCard(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWPROFILECARD_OFFSET))(a1, a2);
		}

		static ::System::Void ShowMessageDialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWMESSAGEDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Void ShowErrorDialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWERRORDIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* CheckPrivilege(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPRIVILEGE_OFFSET))(a1);
		}

		static ::System::Void ResolvePrivilege(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESOLVEPRIVILEGE_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPermission(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPERMISSION_OFFSET))(a1, a2);
		}

		static ::System::Void GetFriendList(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETFRIENDLIST_OFFSET))(a1);
		}

		static ::System::Void GetBlockList(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETBLOCKLIST_OFFSET))(a1);
		}

		static ::System::Void GetUserProfile(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterSocialUpdateCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERSOCIALUPDATECALLBACK_OFFSET))(a1);
		}

		static ::System::Void OnSocialUpdate(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONSOCIALUPDATE_OFFSET))(a1);
		}

		static ::System::Void EnsureSocialUpdateRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSURESOCIALUPDATEREGISTERED_OFFSET))();
		}

		static ::System::Void RegisterFriendUpdateCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERFRIENDUPDATECALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterBlockUpdateCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERBLOCKUPDATECALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterFriendUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERFRIENDUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void UnregisterBlockUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERBLOCKUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void TryReleaseSocialUpdateSubscription()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_TRYRELEASESOCIALUPDATESUBSCRIPTION_OFFSET))();
		}

		static ::System::Void GetAchievements(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACHIEVEMENTS_OFFSET))(a1);
		}

		static ::System::Void UpdateAchievement(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATEACHIEVEMENT_OFFSET))(a1);
		}

		static ::System::Void GetStatistics(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSTATISTICS_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateStatistics(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATESTATISTICS_OFFSET))(a1);
		}

		static ::System::Void GetLeaderboard(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETLEADERBOARD_OFFSET))(a1, a2);
		}

		static ::System::Void SetActivity(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITY_OFFSET))(a1, a2);
		}

		static ::System::Void SetActivityInternal(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITYINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void DeleteActivity(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_DELETEACTIVITY_OFFSET))(a1);
		}

		static ::System::Void GetActivities(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACTIVITIES_OFFSET))(a1, a2);
		}

		static ::System::String* HasJoinSession()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_HASJOINSESSION_OFFSET))();
		}

		static ::System::Void ShowSessionInvite(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITE_OFFSET))(a1);
		}

		static ::System::Void ShowSessionInviteInternal(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITEINTERNAL_OFFSET))(a1);
		}

		static ::System::Void SendSessionInvite(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITE_OFFSET))(a1, a2);
		}

		static ::System::Void SendSessionInviteInternal(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void OnInviteReceived(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONINVITERECEIVED_OFFSET))(a1);
		}

		static ::System::Void EnsureInviteReceivedRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSUREINVITERECEIVEDREGISTERED_OFFSET))();
		}

		static ::System::Void RegisterInviteReceivedCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterInviteReceivedCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void UpdateRecentPlayers(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATERECENTPLAYERS_OFFSET))(a1);
		}

		static ::System::Boolean CheckChannel(::MiHoYo::SDK::SubChannelType a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKCHANNEL_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannel* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannel*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* GetChannelString(::MiHoYo::SDK::SubChannelType a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET))(a1);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Query(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_QUERY_OFFSET))(this, a1);
		}

		::System::Boolean IsHandheld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISHANDHELD_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGIN_OFFSET))(this, a1, a2);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERID_OFFSET))(this);
		}

		::System::String* GetSandboxId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSANDBOXID_OFFSET))(this);
		}

		::System::String* GetAccountCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACCOUNTCOUNTRY_OFFSET))(this);
		}

		::System::Void LogReport(::MiHoYo::SDK::KibanaLogLevel a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ShowVirtualKeyboard_1(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope a6)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean IsInitError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET))(a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESET_OFFSET))(this);
		}
	};
}
