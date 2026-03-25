#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_EventId.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_LoginType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_Region.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ThirdpartyLoginMethod.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/LoginMethod.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager_HoYoPassEventHandler; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager_HoYoPassLoginCallbackDelegate; }
namespace MiHoYo::SDK::UI::OS { class IAccountListDialog; }
namespace MiHoYo::SDK::UI::OS { class IAccountListLogoutConfirmDialog; }
namespace MiHoYo::SDK::UI::OS { class ILoginByAccountDialog; }
namespace MiHoYo::SDK::UI::OS { class IThirdPartyOAuthDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTREACTIVATE_OFFSET UNITYSDK_OFFSET(0x15EF5380)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTRISKCHECK_OFFSET UNITYSDK_OFFSET(0x15EF3DC0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x15EF4790)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x15EFDE70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTVERIFICATION_OFFSET UNITYSDK_OFFSET(0x15EF67A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_BUILDCONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x15EED400)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CHECKACCOUNTSMIGRATION_OFFSET UNITYSDK_OFFSET(0x15EEE4F0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUEREACTIVATE_OFFSET UNITYSDK_OFFSET(0x15EFFF30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUERISKCHECK_OFFSET UNITYSDK_OFFSET(0x15EFF810)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x15EFFBE0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUEVERIFICATION_OFFSET UNITYSDK_OFFSET(0x15F002F0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x15EFE890)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EMAILBINDING_OFFSET UNITYSDK_OFFSET(0x15EF77B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0x15EECB00)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x15EECAA0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_FORGOTPASSWORD_OFFSET UNITYSDK_OFFSET(0x15EFF5E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETHOYOPASSCACHEDIR_OFFSET UNITYSDK_OFFSET(0x15F01EF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x15EECD90)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGIONSWITCHSTATUS_OFFSET UNITYSDK_OFFSET(0x15EECDE0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGION_OFFSET UNITYSDK_OFFSET(0x15EF14E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x15EF52D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GET_ACCOUNTRSAPUBKEY_OFFSET UNITYSDK_OFFSET(0x15EEC030)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GET_HOYOPASSENABLED_OFFSET UNITYSDK_OFFSET(0x15EEBFC0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GOOGLEPCOAUTH_OFFSET UNITYSDK_OFFSET(0x15F015D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EECF20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x15EFE510)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x15EFD2A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x15EF10E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x15EF1740)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x15EEFE30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGOUTWITHCONFIRM_OFFSET UNITYSDK_OFFSET(0x15EF0CF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x15EF0880)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_MIGRATEACCOUNTS_OFFSET UNITYSDK_OFFSET(0x15EEE6E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSAGEGATE_OFFSET UNITYSDK_OFFSET(0x15EF69B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSCURRENTREGIONUPDATE_OFFSET UNITYSDK_OFFSET(0x15EFB490)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSINITRESULT_OFFSET UNITYSDK_OFFSET(0x15EF22C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSLOGINRESULT_OFFSET UNITYSDK_OFFSET(0x15EF79A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSLOGSTRATEGYUPDATE_OFFSET UNITYSDK_OFFSET(0x15EFB200)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSPROTECTIVEBAN_OFFSET UNITYSDK_OFFSET(0x15EF5630)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSREACTIVATE_OFFSET UNITYSDK_OFFSET(0x15EF49A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSRISKCHALLENGE_OFFSET UNITYSDK_OFFSET(0x15EF27B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x15EF40B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSVERIFICATION_OFFSET UNITYSDK_OFFSET(0x15EF5E10)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINCANCELED_OFFSET UNITYSDK_OFFSET(0x15EFC180)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINFAILED_OFFSET UNITYSDK_OFFSET(0x15EF32E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINSUCCEEDED_OFFSET UNITYSDK_OFFSET(0x15EFB750)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PARSEACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x15EFCB70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PARSEHOYOPASSACCOUNTMODEL_OFFSET UNITYSDK_OFFSET(0x15EF8C70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PERFORMEMAILBINDING_OFFSET UNITYSDK_OFFSET(0x15EF7510)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REFRESHCURRENTACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x15EF1B20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REGISTERACCOUNT_OFFSET UNITYSDK_OFFSET(0x15EFEAE0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REQUESTLOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x15EFE0B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x15EEC770)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ROLLBACK_OFFSET UNITYSDK_OFFSET(0x15F01830)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SECURITYVERIFICATION_OFFSET UNITYSDK_OFFSET(0x15EF65B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET UNITYSDK_OFFSET(0x15F01260)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWACCOUNTLISTLOGOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x15EFCEF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWACCOUNTLISTWINDOW_OFFSET UNITYSDK_OFFSET(0x15EFC2B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWLOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x15EF05B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWMANUALLOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x15EFA700)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x15EEF220)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STANDARDIZEURL_OFFSET UNITYSDK_OFFSET(0x15F02280)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STARTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x15EFD830)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STEAMLOGIN_OFFSET UNITYSDK_OFFSET(0x15EF0340)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_THIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x15EF45A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_TOHOYOPASSACCOUNTMODEL_OFFSET UNITYSDK_OFFSET(0x15F00650)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x15EEF860)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATEDEVICEFP_OFFSET UNITYSDK_OFFSET(0x15EEFBC0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATELANGUAGE_OFFSET UNITYSDK_OFFSET(0x15EEF3A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F02560)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EEC0E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_0_OFFSET UNITYSDK_OFFSET(0x15F02980)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_1_OFFSET UNITYSDK_OFFSET(0x15F02B30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_2_OFFSET UNITYSDK_OFFSET(0x15F02DD0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_3_OFFSET UNITYSDK_OFFSET(0x15F02E50)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_0_OFFSET UNITYSDK_OFFSET(0x15F02590)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_1_OFFSET UNITYSDK_OFFSET(0x15F025A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_2_OFFSET UNITYSDK_OFFSET(0x15F02680)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_3_OFFSET UNITYSDK_OFFSET(0x15F02700)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_4_OFFSET UNITYSDK_OFFSET(0x15F02780)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_5_OFFSET UNITYSDK_OFFSET(0x15F02800)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_6_OFFSET UNITYSDK_OFFSET(0x15F02880)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_7_OFFSET UNITYSDK_OFFSET(0x15F02900)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__STEAMLOGIN_B__60_0_OFFSET UNITYSDK_OFFSET(0x15F02FA0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 7287;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0xF570);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* ACCOUNTS_MIGRATION_FLAG_KEY; // 0x0
		::MiHoYo::SDK::UI::OS::IThirdPartyOAuthDialog* thirdPartyOAuthDialog; // 0x10
		::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassEventHandler*>* handlerMap; // 0x18
		::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassLoginCallbackDelegate* onHoYoPassLoginCallback; // 0x20
		::MiHoYo::SDK::UI::OS::ILoginByAccountDialog* loginByAccountDialog; // 0x28
		::MiHoYo::SDK::UI::OS::IAccountListLogoutConfirmDialog* accountListLogoutConfirmDialog; // 0x30
		::MiHoYo::SDK::UI::OS::IAccountListDialog* accountListDialog; // 0x38
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType loginType; // 0x40
		::System::Boolean ageGateInProgress; // 0x44
		::System::Boolean isEnabled; // 0x45
		::System::Boolean reactivationInProgress; // 0x46
		::MiHoYo::SDK::PC::OS::LoginMethod loginMethod; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean get_HoYoPassEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GET_HOYOPASSENABLED_OFFSET))(this);
		}

		static ::System::String* get_AccountRSAPubKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GET_ACCOUNTRSAPUBKEY_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_RESET_OFFSET))(this);
		}

		static ::System::Void EventHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId eventId, ::System::String* args)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EVENTHANDLER_OFFSET))(eventId, args);
		}

		static ::System::Boolean GetRegionSwitchStatusHandler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGIONSWITCHSTATUSHANDLER_OFFSET))();
		}

		::System::Boolean GetRegionSwitchStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGIONSWITCHSTATUS_OFFSET))(this);
		}

		::System::Boolean Initialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void UpdateLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATELANGUAGE_OFFSET))(this);
		}

		::System::Void UpdateDeviceFp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATEDEVICEFP_OFFSET))(this);
		}

		::System::Void UpdateConfig(::MiHoYo::SDK::JSONObject* config)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATECONFIG_OFFSET))(this, config);
		}

		::System::Void Login(::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassLoginCallbackDelegate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassLoginCallbackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void LogoutWithoutConfirm(::System::Boolean deleteAccount, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, deleteAccount, callback);
		}

		::System::Void LogoutWithConfirm(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGOUTWITHCONFIRM_OFFSET))(this, callback);
		}

		::System::Void LoginByAuthTicket(::System::String* authTicket, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType accountLoginType, ::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassLoginCallbackDelegate* callback, ::MiHoYo::SDK::PC::OS::LoginMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType, ::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassLoginCallbackDelegate*, ::MiHoYo::SDK::PC::OS::LoginMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYAUTHTICKET_OFFSET))(this, authTicket, accountLoginType, callback, method);
		}

		::System::Void LoginByGameToken(::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYGAMETOKEN_OFFSET))(this, accountModel);
		}

		::System::Void RefreshCurrentAccountInfo(::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REFRESHCURRENTACCOUNTINFO_OFFSET))(this, callback);
		}

		::System::Void EventDispatcher(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId id, ::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EVENTDISPATCHER_OFFSET))(this, id, args);
		}

		::System::Void OnHoYoPassInitResult(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSINITRESULT_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassRiskChallenge(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSRISKCHALLENGE_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassThirdpartyAccountBinding(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSTHIRDPARTYACCOUNTBINDING_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassReactivate(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSREACTIVATE_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassProtectiveBan(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSPROTECTIVEBAN_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassVerification(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSVERIFICATION_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassAgeGate(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSAGEGATE_OFFSET))(this, args);
		}

		::System::Boolean PerformEmailBinding(::System::String* bindEmailTicket, ::System::Action* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PERFORMEMAILBINDING_OFFSET))(this, bindEmailTicket, callback);
		}

		::System::Void OnHoYoPassLoginResult(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSLOGINRESULT_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassLogStrategyUpdate(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSLOGSTRATEGYUPDATE_OFFSET))(this, args);
		}

		::System::Void OnHoYoPassCurrentRegionUpdate(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSCURRENTREGIONUPDATE_OFFSET))(this, args);
		}

		::System::Void OnLoginSucceeded(::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINSUCCEEDED_OFFSET))(this, accountModel);
		}

		::System::Void OnLoginCanceled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINCANCELED_OFFSET))(this);
		}

		::System::Void OnLoginFailed(::System::String* message, ::System::Boolean showToast)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINFAILED_OFFSET))(this, message, showToast);
		}

		::System::Void ShowToast(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWTOAST_OFFSET))(this, message);
		}

		::System::Void ShowManualLoginWindow(::System::Boolean enableBackBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWMANUALLOGINWINDOW_OFFSET))(this, enableBackBtn);
		}

		::System::Void ShowAccountListWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWACCOUNTLISTWINDOW_OFFSET))(this);
		}

		::System::Void ShowLoginWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWLOGINWINDOW_OFFSET))(this);
		}

		::System::Void ShowAccountListLogoutConfirm(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWACCOUNTLISTLOGOUTCONFIRM_OFFSET))(this, callback);
		}

		::System::Void LoginByAccount(::System::String* accountText, ::System::String* passwordText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYACCOUNT_OFFSET))(this, accountText, passwordText);
		}

		::System::Void StartThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::System::Boolean retry)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STARTTHIRDPARTYOAUTH_OFFSET))(this, method, retry);
		}

		::System::Void AbortThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTTHIRDPARTYOAUTH_OFFSET))(this, method);
		}

		::System::Void RequestLoginByThirdparty(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REQUESTLOGINBYTHIRDPARTY_OFFSET))(this, method, accessToken);
		}

		::System::Void LoginByAccountList(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYACCOUNTLIST_OFFSET))(this, aid);
		}

		::System::Void SteamLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STEAMLOGIN_OFFSET))(this);
		}

		::System::Void DeleteAccount(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_DELETEACCOUNT_OFFSET))(this, aid);
		}

		::System::Void RegisterAccount(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REGISTERACCOUNT_OFFSET))(this, callback);
		}

		::System::Void ForgotPassword(::System::String* accountName, ::System::Action_2<::System::Int32, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_FORGOTPASSWORD_OFFSET))(this, accountName, callback);
		}

		::System::Void ThirdpartyAccountBinding(::System::String* actionTicket, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_THIRDPARTYACCOUNTBINDING_OFFSET))(this, actionTicket, callback);
		}

		::System::Void SecurityVerification(::System::String* actionTicket, ::System::Action_2<::System::Int32, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SECURITYVERIFICATION_OFFSET))(this, actionTicket, callback);
		}

		::System::Void EmailBinding(::System::String* actionTicket, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EMAILBINDING_OFFSET))(this, actionTicket, callback);
		}

		::System::Void ContinueRiskCheck(::System::String* sessionId, ::System::String* aigisData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUERISKCHECK_OFFSET))(this, sessionId, aigisData);
		}

		::System::Void AbortRiskCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTRISKCHECK_OFFSET))(this);
		}

		::System::Void ContinueThirdpartyAccountBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET))(this);
		}

		::System::Void AbortThirdpartyAccountBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET))(this);
		}

		::System::Void ContinueReactivate(::System::String* reactivateTicket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUEREACTIVATE_OFFSET))(this, reactivateTicket);
		}

		::System::Void AbortReactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTREACTIVATE_OFFSET))(this);
		}

		::System::Void ContinueVerification(::System::String* verificationData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUEVERIFICATION_OFFSET))(this, verificationData);
		}

		::System::Void AbortVerification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTVERIFICATION_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* ToHoYoPassAccountModel(::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_TOHOYOPASSACCOUNTMODEL_OFFSET))(this, accountModel);
		}

		::System::Void SetCurrentAccountLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET))(this);
		}

		::System::Void GooglePCOAuth(::MiHoYo::SDK::AccountModel* userData, ::System::Action* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GOOGLEPCOAUTH_OFFSET))(this, userData, successCallback);
		}

		::System::Boolean CheckAccountsMigration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CHECKACCOUNTSMIGRATION_OFFSET))(this);
		}

		::System::Void RollBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ROLLBACK_OFFSET))(this);
		}

		::System::Void MigrateAccounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_MIGRATEACCOUNTS_OFFSET))(this);
		}

		::System::String* GetHoYoPassCacheDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETHOYOPASSCACHEDIR_OFFSET))(this);
		}

		::System::String* BuildConfigString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_BUILDCONFIGSTRING_OFFSET))(this);
		}

		::System::String* StandardizeUrl(::System::String* strOriginalUrl)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STANDARDIZEURL_OFFSET))(this, strOriginalUrl);
		}

		::MiHoYo::SDK::AccountModel* ParseHoYoPassAccountModel(::MiHoYo::SDK::JSONNode* account)
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PARSEHOYOPASSACCOUNTMODEL_OFFSET))(this, account);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* ParseAccountList(::System::String* accountListString)
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PARSEACCOUNTLIST_OFFSET))(this, accountListString);
		}

		::MiHoYo::SDK::ReportType GetReportType(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType loginType)
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREPORTTYPE_OFFSET))(this, loginType);
		}

		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region GetRegion(::System::String* strRegion)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGION_OFFSET))(this, strRegion);
		}

		::System::Void _ShowManualLoginWindow_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_0_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_1_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__51_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_2_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__51_3(::System::String* accountName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_3_OFFSET))(this, accountName);
		}

		::System::Void _ShowManualLoginWindow_b__51_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_4_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__51_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_5_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__51_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_6_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__51_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__51_7_OFFSET))(this);
		}

		::System::Void _ShowAccountListWindow_b__52_0(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_0_OFFSET))(this, aid);
		}

		::System::Void _ShowAccountListWindow_b__52_1(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_1_OFFSET))(this, aid);
		}

		::System::Void _ShowAccountListWindow_b__52_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_2_OFFSET))(this);
		}

		::System::Void _ShowAccountListWindow_b__52_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__52_3_OFFSET))(this);
		}

		::System::Void _SteamLogin_b__60_0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__STEAMLOGIN_B__60_0_OFFSET))(this, response);
		}
	};
}
