#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class BoxModel; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_COMBOMANAGER_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x19476FD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_BIND_OFFSET UNITYSDK_OFFSET(0x19475F00)
#define MIHOYO_SDK_WIN_COMBOMANAGER_BOXCONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x19472980)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CHECKACCOUNTPLATFORMANDLOGIN_OFFSET UNITYSDK_OFFSET(0x19469A90)
#define MIHOYO_SDK_WIN_COMBOMANAGER_COMBOCONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x194726E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x1946E140)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CREATEBEFOREVERIFYSTRING_OFFSET UNITYSDK_OFFSET(0x19477540)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CREATEFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x19470CE0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_EXIT_OFFSET UNITYSDK_OFFSET(0x19475CA0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x19467400)
#define MIHOYO_SDK_WIN_COMBOMANAGER_HANDLECOMBOLOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1946E460)
#define MIHOYO_SDK_WIN_COMBOMANAGER_INGAMESYNC_OFFSET UNITYSDK_OFFSET(0x19473740)
#define MIHOYO_SDK_WIN_COMBOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x19467420)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOCALCONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x19470EC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x1946CBD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x194684B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x19474B40)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x19474390)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONACCOUNTPLATLOGIN_OFFSET UNITYSDK_OFFSET(0x1946E660)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONBEFOREVERIFYFAILED_OFFSET UNITYSDK_OFFSET(0x194772D0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x194761E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1946BED0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONGETPING_OFFSET UNITYSDK_OFFSET(0x19476690)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONLOGOUTSUCCESS_OFFSET UNITYSDK_OFFSET(0x19475330)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONMDKORAUTHTICKETLOGIN_OFFSET UNITYSDK_OFFSET(0x1946A9B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONREQUESTCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x1946FD30)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONSHOWLOGINSUCCESSTIPS_OFFSET UNITYSDK_OFFSET(0x19470B90)
#define MIHOYO_SDK_WIN_COMBOMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x194777E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x19476440)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REPORTMACADDRESS_OFFSET UNITYSDK_OFFSET(0x19468300)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x1946CA30)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTPING_OFFSET UNITYSDK_OFFSET(0x194764D0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTREDPOINT_OFFSET UNITYSDK_OFFSET(0x19475DD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x19467410)
#define MIHOYO_SDK_WIN_COMBOMANAGER_STOPPINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x19476650)
#define MIHOYO_SDK_WIN_COMBOMANAGER_STOPPING_OFFSET UNITYSDK_OFFSET(0x19476600)
#define MIHOYO_SDK_WIN_COMBOMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x19475630)
#define MIHOYO_SDK_WIN_COMBOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19478020)
#define MIHOYO_SDK_WIN_COMBOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19478000)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager_TypeDefinitionIndex = 19989;

	class ComboManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::ComboManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ComboManager**)Il2CppClass::FromTypeDefinitionIndex(ComboManager_TypeDefinitionIndex)->GetStaticField(0xA0C0);
		}
		// static const ::System::Single MinPingTime; // 0x0
		// static const ::System::String* THIRD_PARTY_GOOGLE; // 0x0
		// static const ::System::String* THIRD_PARTY_FACEBOOK; // 0x0
		// static const ::System::String* THIRD_PARTY_APPLE; // 0x0
		// static const ::System::String* THIRD_PARTY_TWITTER; // 0x0
		::UnityEngine::Coroutine* pingCoroutine; // 0x10
		::System::Action* m_accountPlatNativeFailed; // 0x18
		::System::Action_1<::System::String*>* m_loginCallback; // 0x20
		::System::String* _Country_k__BackingField; // 0x28
		::System::Single pingTime; // 0x30
		::System::Int64 totalTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_Country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_Country(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_SET_COUNTRY_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void ReportMacAddress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REPORTMACADDRESS_OFFSET))(this);
		}

		::System::Void Login(::System::String* authTicket, ::System::String* traceId, ::System::String* thirdpartyType, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_OFFSET))(this, authTicket, traceId, thirdpartyType, callback);
		}

		::System::Void OnMDKOrAuthTicketLogin(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* response, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONMDKORAUTHTICKETLOGIN_OFFSET))(this, response, callback);
		}

		::System::Void Login_1(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_1_OFFSET))(this, callback);
		}

		::System::Boolean CheckAccountPlatformAndLogin(::System::Action* accountPlatNativeFailedCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extraArgs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_CHECKACCOUNTPLATFORMANDLOGIN_OFFSET))(this, accountPlatNativeFailedCallback, extraArgs);
		}

		::System::Void HandleComboLoginFlowNotification(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_HANDLECOMBOLOGINFLOWNOTIFICATION_OFFSET))(this, response);
		}

		::System::Void RequestComboLogin(::System::String* body, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTCOMBOLOGIN_OFFSET))(this, body, callback, extHeaders);
		}

		::System::Void OnAccountPlatLogin(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONACCOUNTPLATLOGIN_OFFSET))(this, response);
		}

		::System::Void OnRequestComboLogin(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel, ::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONREQUESTCOMBOLOGIN_OFFSET))(this, callbackModel, comboLoginResponse);
		}

		::System::Void OnComboLoginCallback(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* response, ::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONNode* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, response, callback, extInfo);
		}

		::System::Void OnShowLoginSuccessTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONSHOWLOGINSUCCESSTIPS_OFFSET))(this);
		}

		::System::String* CreateFailCallback()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_CREATEFAILCALLBACK_OFFSET))(this);
		}

		::System::Void ConfigSyncWithNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_CONFIGSYNCWITHNATIVE_OFFSET))(this);
		}

		::System::Void LocalConfigSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOCALCONFIGSYNC_OFFSET))(this);
		}

		::System::Void ComboConfigSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_COMBOCONFIGSYNC_OFFSET))(this);
		}

		::System::Void BoxConfigSync(::MiHoYo::SDK::BoxModel* customBox)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::BoxModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_BOXCONFIGSYNC_OFFSET))(this, customBox);
		}

		::System::Void InGameSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_INGAMESYNC_OFFSET))(this);
		}

		::System::Void Logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUT_OFFSET))(this, callback);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, callback);
		}

		::System::Void OnLogoutSuccess(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONLOGOUTSUCCESS_OFFSET))(this, response, callback);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void Exit(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_EXIT_OFFSET))(this, callback);
		}

		::System::Void RequestRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTREDPOINT_OFFSET))(this);
		}

		::System::Void Bind(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_BIND_OFFSET))(this, callback);
		}

		::System::Void OnBindCallback(::System::Int32 ret, ::System::String* msg, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONBINDCALLBACK_OFFSET))(this, ret, msg, callback);
		}

		::System::Void Ping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_PING_OFFSET))(this);
		}

		::System::Void StopPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_STOPPING_OFFSET))(this);
		}

		::System::Void StopPingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_STOPPINGCOROUTINE_OFFSET))(this);
		}

		::System::Void RequestPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTPING_OFFSET))(this);
		}

		::System::Void OnGetPing(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONGETPING_OFFSET))(this, response);
		}

		::System::Void BeforeVerify(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_BEFOREVERIFY_OFFSET))(this, callback);
		}

		::System::Void OnBeforeVerifyFailed(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONBEFOREVERIFYFAILED_OFFSET))(this, callback);
		}

		::System::String* CreateBeforeVerifyString(::System::Int32 ret, ::System::String* msg, ::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_CREATEBEFOREVERIFYSTRING_OFFSET))(this, ret, msg, url);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}
	};
}
