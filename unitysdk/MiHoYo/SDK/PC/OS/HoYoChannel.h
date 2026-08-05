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

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CD036B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKMULTIPLAYERPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1CD03230)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1CD04CF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1CD04980)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CREATECONSOLERESULT_OFFSET UNITYSDK_OFFSET(0x1CD03050)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_DELETEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD08B50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSUREINVITERECEIVEDREGISTERED_OFFSET UNITYSDK_OFFSET(0x1CD0A4C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSURESOCIALUPDATEREGISTERED_OFFSET UNITYSDK_OFFSET(0x1CD06230)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACCOUNTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x1CD0BA90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1CD06870)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1CD08CE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETBLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1CD056B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET UNITYSDK_OFFSET(0x1CD0B8D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1CD05570)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETLEADERBOARD_OFFSET UNITYSDK_OFFSET(0x1CD07A60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x1CD0BA50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1CD06EF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1CD0BA10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1CD0B9D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERPROFILE_OFFSET UNITYSDK_OFFSET(0x1CD057F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CD0B420)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_HASJOINSESSION_OFFSET UNITYSDK_OFFSET(0x1CD09110)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISHANDHELD_OFFSET UNITYSDK_OFFSET(0x1CD0B9B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET UNITYSDK_OFFSET(0x1CD0C230)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGIN_OFFSET UNITYSDK_OFFSET(0x1CD0B9C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1CD0BAD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1CD0CEF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x1CD09D50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONRESOLVEPRIVILEGERESULT_OFFSET UNITYSDK_OFFSET(0x1CD03360)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONSOCIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1CD05FF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_QUERY_OFFSET UNITYSDK_OFFSET(0x1CD0B930)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERBLOCKUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD065E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERFRIENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD06530)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD0A610)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD05EE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESET_OFFSET UNITYSDK_OFFSET(0x1CD0CF00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1CD04B30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD09650)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITE_OFFSET UNITYSDK_OFFSET(0x1CD094C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD080D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD07F40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1CD043C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWMESSAGEDIALOG_OFFSET UNITYSDK_OFFSET(0x1CD039E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWPROFILECARD_OFFSET UNITYSDK_OFFSET(0x1CD03880)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD093A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITE_OFFSET UNITYSDK_OFFSET(0x1CD09220)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_1_OFFSET UNITYSDK_OFFSET(0x1CD0C0B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1CD03520)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_TRYRELEASESOCIALUPDATESUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x1CD066F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERBLOCKUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD06810)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERFRIENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD06690)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CD0A6C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATEACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x1CD069E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATERECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0x1CD0A7C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1CD07400)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD0CF20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0CF10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel_TypeDefinitionIndex = 20605;

	class HoYoChannel : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet__friendUpdateCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA550);
		}
		static ::System::Action_1<::System::String*>** StaticGet__inviteReceivedCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA558);
		}
		static ::System::Action_1<::System::String*>** StaticGet__blockUpdateCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA560);
		}
		static ::System::Action_3<::System::Int32, ::System::String*, ::System::Int32>** StaticGet__onResolvePrivilege()
		{
			return (::System::Action_3<::System::Int32, ::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA568);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannel** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannel**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA570);
		}
		static ::System::Boolean* StaticGet__isInviteReceivedRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x4670);
		}
		static ::System::Boolean* StaticGet__hasJoinSession()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x4671);
		}
		static ::System::Boolean* StaticGet__isSocialUpdateRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x4672);
		}
		static ::System::Int32* StaticGet__thirdErrorCode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x4674);
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

		static ::MiHoYo::SDK::JSONObject* CreateConsoleResult(::System::Int32 resultCode, ::System::String* msg, ::System::Int32 thirdErrorCode)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CREATECONSOLERESULT_OFFSET))(resultCode, msg, thirdErrorCode);
		}

		static ::System::Boolean CheckMultiplayerPrivilege()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKMULTIPLAYERPRIVILEGE_OFFSET))();
		}

		static ::System::Void OnResolvePrivilegeResult(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* result)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONRESOLVEPRIVILEGERESULT_OFFSET))(result);
		}

		static ::System::Void ShowVirtualKeyboard(::System::Action_1<::System::String*>* callback, ::System::String* title, ::System::String* description, ::System::String* defaultValue)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_OFFSET))(callback, title, description, defaultValue);
		}

		static ::System::Void ShowProfileCard(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWPROFILECARD_OFFSET))(xuid, callback);
		}

		static ::System::Void ShowMessageDialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWMESSAGEDIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::Void ShowErrorDialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWERRORDIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* CheckPrivilege(::System::String* strPrivilege)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPRIVILEGE_OFFSET))(strPrivilege);
		}

		static ::System::Void ResolvePrivilege(::System::String* strPrivilege, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESOLVEPRIVILEGE_OFFSET))(strPrivilege, callback);
		}

		static ::System::Void CheckPermission(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPERMISSION_OFFSET))(jsonString, callback);
		}

		static ::System::Void GetFriendList(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETFRIENDLIST_OFFSET))(callback);
		}

		static ::System::Void GetBlockList(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETBLOCKLIST_OFFSET))(callback);
		}

		static ::System::Void GetUserProfile(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERPROFILE_OFFSET))(xuid, callback);
		}

		static ::System::Void RegisterSocialUpdateCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERSOCIALUPDATECALLBACK_OFFSET))(callback);
		}

		static ::System::Void OnSocialUpdate(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult* result)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONSOCIALUPDATE_OFFSET))(result);
		}

		static ::System::Void EnsureSocialUpdateRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSURESOCIALUPDATEREGISTERED_OFFSET))();
		}

		static ::System::Void RegisterFriendUpdateCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERFRIENDUPDATECALLBACK_OFFSET))(callback);
		}

		static ::System::Void RegisterBlockUpdateCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERBLOCKUPDATECALLBACK_OFFSET))(callback);
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

		static ::System::Void GetAchievements(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACHIEVEMENTS_OFFSET))(callback);
		}

		static ::System::Void UpdateAchievement(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATEACHIEVEMENT_OFFSET))(jsonString);
		}

		static ::System::Void GetStatistics(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSTATISTICS_OFFSET))(jsonString, callback);
		}

		static ::System::Void UpdateStatistics(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATESTATISTICS_OFFSET))(jsonString);
		}

		static ::System::Void GetLeaderboard(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETLEADERBOARD_OFFSET))(jsonString, callback);
		}

		static ::System::Void SetActivity(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITY_OFFSET))(jsonString, callback);
		}

		static ::System::Void SetActivityInternal(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITYINTERNAL_OFFSET))(jsonString, callback);
		}

		static ::System::Void DeleteActivity(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_DELETEACTIVITY_OFFSET))(callback);
		}

		static ::System::Void GetActivities(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACTIVITIES_OFFSET))(jsonString, callback);
		}

		static ::System::String* HasJoinSession()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_HASJOINSESSION_OFFSET))();
		}

		static ::System::Void ShowSessionInvite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITE_OFFSET))(callback);
		}

		static ::System::Void ShowSessionInviteInternal(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITEINTERNAL_OFFSET))(callback);
		}

		static ::System::Void SendSessionInvite(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITE_OFFSET))(jsonString, callback);
		}

		static ::System::Void SendSessionInviteInternal(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITEINTERNAL_OFFSET))(jsonString, callback);
		}

		static ::System::Void OnInviteReceived(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult* result)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONINVITERECEIVED_OFFSET))(result);
		}

		static ::System::Void EnsureInviteReceivedRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSUREINVITERECEIVEDREGISTERED_OFFSET))();
		}

		static ::System::Void RegisterInviteReceivedCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(callback);
		}

		static ::System::Void UnregisterInviteReceivedCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void UpdateRecentPlayers(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATERECENTPLAYERS_OFFSET))(jsonString);
		}

		static ::System::Boolean CheckChannel(::MiHoYo::SDK::SubChannelType type)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKCHANNEL_OFFSET))(type);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannel* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannel*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* GetChannelString(::MiHoYo::SDK::SubChannelType type)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET))(type);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Query(::System::String* key)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_QUERY_OFFSET))(this, key);
		}

		::System::Boolean IsHandheld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISHANDHELD_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGIN_OFFSET))(this, callback, forceRefresh);
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

		::System::Void LogReport(::MiHoYo::SDK::KibanaLogLevel level, ::System::String* key, ::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET))(this, level, key, msg, code);
		}

		static ::System::Void ShowVirtualKeyboard_1(::System::Action_1<::System::String*>* callback, ::System::String* title, ::System::String* description, ::System::String* defaultValue, ::System::Int32 maxLength, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope scope)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_1_OFFSET))(callback, title, description, defaultValue, maxLength, scope);
		}

		static ::System::Boolean IsInitError(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET))(callback);
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
