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

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTREACTIVATE_OFFSET UNITYSDK_OFFSET(0x19FD3AB0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTRISKCHECK_OFFSET UNITYSDK_OFFSET(0x19FD2890)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x19FD3020)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x19FDBE60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ABORTVERIFICATION_OFFSET UNITYSDK_OFFSET(0x19FD4AF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_BUILDCONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x19FCD1B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CHECKACCOUNTSMIGRATION_OFFSET UNITYSDK_OFFSET(0x19FCEAD0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUEREACTIVATE_OFFSET UNITYSDK_OFFSET(0x19FDD220)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUERISKCHECK_OFFSET UNITYSDK_OFFSET(0x19FDCD40)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x19FDCFD0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_CONTINUEVERIFICATION_OFFSET UNITYSDK_OFFSET(0x19FDD4F0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x19FDC720)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EMAILBINDING_OFFSET UNITYSDK_OFFSET(0x19FD5E70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0x19FCC8E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x19FCC850)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_FORGOTPASSWORD_OFFSET UNITYSDK_OFFSET(0x19FDCB50)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETHOYOPASSCACHEDIR_OFFSET UNITYSDK_OFFSET(0x19FDF320)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x19FCCAE0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGIONSWITCHSTATUS_OFFSET UNITYSDK_OFFSET(0x19FCCB60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREGION_OFFSET UNITYSDK_OFFSET(0x19FD11C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x19FD3A00)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GET_ACCOUNTRSAPUBKEY_OFFSET UNITYSDK_OFFSET(0x19FCBE20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GET_HOYOPASSENABLED_OFFSET UNITYSDK_OFFSET(0x19FCBD80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_GOOGLEPCOAUTH_OFFSET UNITYSDK_OFFSET(0x19FDEB60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19FCCCA0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x19FDC420)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x19FDB3A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x19FD0E40)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGINBYGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x19FD12C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x19FCFD90)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGOUTWITHCONFIRM_OFFSET UNITYSDK_OFFSET(0x19FD0A60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x19FD0740)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_MIGRATEACCOUNTS_OFFSET UNITYSDK_OFFSET(0x19FCEC40)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSAGEGATE_OFFSET UNITYSDK_OFFSET(0x19FD4D10)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSCHANNELACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x19FD5810)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSCURRENTREGIONUPDATE_OFFSET UNITYSDK_OFFSET(0x19FD9680)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSINITRESULT_OFFSET UNITYSDK_OFFSET(0x19FD1620)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSLOGINRESULT_OFFSET UNITYSDK_OFFSET(0x19FD6060)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSLOGSTRATEGYUPDATE_OFFSET UNITYSDK_OFFSET(0x19FD93E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSPROTECTIVEBAN_OFFSET UNITYSDK_OFFSET(0x19FD3D00)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSREACTIVATE_OFFSET UNITYSDK_OFFSET(0x19FD3240)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSRISKCHALLENGE_OFFSET UNITYSDK_OFFSET(0x19FD17D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x19FD2A70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSVERIFICATION_OFFSET UNITYSDK_OFFSET(0x19FD43D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINCANCELED_OFFSET UNITYSDK_OFFSET(0x19FD8780)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINFAILED_OFFSET UNITYSDK_OFFSET(0x19FD20C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONLOGINSUCCEEDED_OFFSET UNITYSDK_OFFSET(0x19FD9950)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PARSEACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x19FDAB80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PARSEHOYOPASSACCOUNTMODEL_OFFSET UNITYSDK_OFFSET(0x19FD6FE0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_PERFORMEMAILBINDING_OFFSET UNITYSDK_OFFSET(0x19FD5C10)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REFRESHCURRENTACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x19FD14C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REGISTERACCOUNT_OFFSET UNITYSDK_OFFSET(0x19FDC8E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REQUESTLOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x19FDC000)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x19FCC5C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ROLLBACK_OFFSET UNITYSDK_OFFSET(0x19FDEE60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SECURITYVERIFICATION_OFFSET UNITYSDK_OFFSET(0x19FD4900)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET UNITYSDK_OFFSET(0x19FDE7F0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWACCOUNTLISTLOGOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x19FDAFF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWACCOUNTLISTWINDOW_OFFSET UNITYSDK_OFFSET(0x19FDA310)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWLOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x19FD04D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWMANUALLOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x19FD88C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x19FCF620)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STANDARDIZEURL_OFFSET UNITYSDK_OFFSET(0x19FDF7C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STARTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x19FDB8B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_STEAMLOGIN_OFFSET UNITYSDK_OFFSET(0x19FD0230)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_THIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x19FD2E30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_TOHOYOPASSACCOUNTMODEL_OFFSET UNITYSDK_OFFSET(0x19FDD710)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x19FCF940)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATEDEVICEFP_OFFSET UNITYSDK_OFFSET(0x19FCFB80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_UPDATELANGUAGE_OFFSET UNITYSDK_OFFSET(0x19FCF7A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FDF830)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCBED0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_0_OFFSET UNITYSDK_OFFSET(0x19FDFD80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_1_OFFSET UNITYSDK_OFFSET(0x19FDFF20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_2_OFFSET UNITYSDK_OFFSET(0x19FE01B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_3_OFFSET UNITYSDK_OFFSET(0x19FE0250)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_0_OFFSET UNITYSDK_OFFSET(0x19FDF880)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_1_OFFSET UNITYSDK_OFFSET(0x19FDF890)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_2_OFFSET UNITYSDK_OFFSET(0x19FDF970)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_3_OFFSET UNITYSDK_OFFSET(0x19FDFA10)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_4_OFFSET UNITYSDK_OFFSET(0x19FDFAC0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_5_OFFSET UNITYSDK_OFFSET(0x19FDFB70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_6_OFFSET UNITYSDK_OFFSET(0x19FDFC20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_7_OFFSET UNITYSDK_OFFSET(0x19FDFCD0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__STEAMLOGIN_B__61_0_OFFSET UNITYSDK_OFFSET(0x19FE03A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER__STEAMLOGIN_B__61_1_OFFSET UNITYSDK_OFFSET(0x19FE04E0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 19163;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0x9430);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* ACCOUNTS_MIGRATION_FLAG_KEY; // 0x0
		::MiHoYo::SDK::UI::OS::IAccountListLogoutConfirmDialog* accountListLogoutConfirmDialog; // 0x10
		::MiHoYo::SDK::UI::OS::ILoginByAccountDialog* loginByAccountDialog; // 0x18
		::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassEventHandler*>* handlerMap; // 0x20
		::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassLoginCallbackDelegate* onHoYoPassLoginCallback; // 0x28
		::MiHoYo::SDK::UI::OS::IThirdPartyOAuthDialog* thirdPartyOAuthDialog; // 0x30
		::MiHoYo::SDK::UI::OS::IAccountListDialog* accountListDialog; // 0x38
		::MiHoYo::SDK::PC::OS::LoginMethod loginMethod; // 0x40
		::System::Boolean isEnabled; // 0x44
		::System::Boolean ageGateInProgress; // 0x45
		::System::Boolean reactivationInProgress; // 0x46
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType loginType; // 0x48

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

		::System::Void OnHoYoPassChannelAccountBinding(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_ONHOYOPASSCHANNELACCOUNTBINDING_OFFSET))(this, args);
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

		::System::Void RequestLoginByThirdparty(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::System::String* accessToken, ::System::Boolean enableAutoRegister)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_REQUESTLOGINBYTHIRDPARTY_OFFSET))(this, method, accessToken, enableAutoRegister);
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

		::System::Void _ShowManualLoginWindow_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_0_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__52_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_1_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__52_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_2_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__52_3(::System::String* accountName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_3_OFFSET))(this, accountName);
		}

		::System::Void _ShowManualLoginWindow_b__52_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_4_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__52_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_5_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__52_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_6_OFFSET))(this);
		}

		::System::Void _ShowManualLoginWindow_b__52_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWMANUALLOGINWINDOW_B__52_7_OFFSET))(this);
		}

		::System::Void _ShowAccountListWindow_b__53_0(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_0_OFFSET))(this, aid);
		}

		::System::Void _ShowAccountListWindow_b__53_1(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_1_OFFSET))(this, aid);
		}

		::System::Void _ShowAccountListWindow_b__53_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_2_OFFSET))(this);
		}

		::System::Void _ShowAccountListWindow_b__53_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__SHOWACCOUNTLISTWINDOW_B__53_3_OFFSET))(this);
		}

		::System::Void _SteamLogin_b__61_0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__STEAMLOGIN_B__61_0_OFFSET))(this, response);
		}

		::System::Void _SteamLogin_b__61_1(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER__STEAMLOGIN_B__61_1_OFFSET))(this, accessToken);
		}
	};
}
