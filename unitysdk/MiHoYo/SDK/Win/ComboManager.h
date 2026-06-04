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

#define MIHOYO_SDK_WIN_COMBOMANAGER_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x184A9B50)
#define MIHOYO_SDK_WIN_COMBOMANAGER_BIND_OFFSET UNITYSDK_OFFSET(0x184A8DC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_BOXCONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x184A6CA0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CHECKACCOUNTPLATFORMANDLOGIN_OFFSET UNITYSDK_OFFSET(0x1849FEA0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_COMBOCONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x184A6AC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x184A31C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CREATEBEFOREVERIFYSTRING_OFFSET UNITYSDK_OFFSET(0x184A9FB0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_CREATEFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x184A5A10)
#define MIHOYO_SDK_WIN_COMBOMANAGER_EXIT_OFFSET UNITYSDK_OFFSET(0x184A8B10)
#define MIHOYO_SDK_WIN_COMBOMANAGER_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1849DC00)
#define MIHOYO_SDK_WIN_COMBOMANAGER_HANDLECOMBOLOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x184A3450)
#define MIHOYO_SDK_WIN_COMBOMANAGER_INGAMESYNC_OFFSET UNITYSDK_OFFSET(0x184A7430)
#define MIHOYO_SDK_WIN_COMBOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1849DC20)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOCALCONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x184A5B00)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x184A2A10)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1849EC30)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x184A8070)
#define MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x184A7D30)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONACCOUNTPLATLOGIN_OFFSET UNITYSDK_OFFSET(0x184A3620)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONBEFOREVERIFYFAILED_OFFSET UNITYSDK_OFFSET(0x184A9E00)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x184A90E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x184A1EB0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONGETPING_OFFSET UNITYSDK_OFFSET(0x184A9580)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONLOGOUTSUCCESS_OFFSET UNITYSDK_OFFSET(0x184A83C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONMDKORAUTHTICKETLOGIN_OFFSET UNITYSDK_OFFSET(0x184A0C40)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONREQUESTCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x184A4AD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_ONSHOWLOGINSUCCESSTIPS_OFFSET UNITYSDK_OFFSET(0x184A5900)
#define MIHOYO_SDK_WIN_COMBOMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x184AA110)
#define MIHOYO_SDK_WIN_COMBOMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x184A9230)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REPORTMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1849EB20)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x184A2880)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTPING_OFFSET UNITYSDK_OFFSET(0x184A92A0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTREDPOINT_OFFSET UNITYSDK_OFFSET(0x184A8C60)
#define MIHOYO_SDK_WIN_COMBOMANAGER_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1849DC10)
#define MIHOYO_SDK_WIN_COMBOMANAGER_STOPPINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x184A94B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_STOPPING_OFFSET UNITYSDK_OFFSET(0x184A93E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x184A86B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184AA9E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x184AA9C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager_TypeDefinitionIndex = 9065;

	class ComboManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::ComboManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ComboManager**)Il2CppClass::FromTypeDefinitionIndex(ComboManager_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		// static const ::System::Single MinPingTime; // 0x0
		// static const ::System::String* THIRD_PARTY_GOOGLE; // 0x0
		// static const ::System::String* THIRD_PARTY_FACEBOOK; // 0x0
		// static const ::System::String* THIRD_PARTY_APPLE; // 0x0
		// static const ::System::String* THIRD_PARTY_TWITTER; // 0x0
		::System::Action* m_accountPlatNativeFailed; // 0x10
		::System::Action_1<::System::String*>* m_loginCallback; // 0x18
		::System::String* _Country_k__BackingField; // 0x20
		::UnityEngine::Coroutine* pingCoroutine; // 0x28
		::System::Int64 totalTime; // 0x30
		::System::Single pingTime; // 0x38

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

		::System::Void set_Country(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_SET_COUNTRY_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void ReportMacAddress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REPORTMACADDRESS_OFFSET))(this);
		}

		::System::Void Login(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnMDKOrAuthTicketLogin(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONMDKORAUTHTICKETLOGIN_OFFSET))(this, a1, a2);
		}

		::System::Void Login_1(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGIN_1_OFFSET))(this, a1);
		}

		::System::Boolean CheckAccountPlatformAndLogin(::System::Action* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_CHECKACCOUNTPLATFORMANDLOGIN_OFFSET))(this, a1, a2);
		}

		::System::Void HandleComboLoginFlowNotification(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_HANDLECOMBOLOGINFLOWNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void RequestComboLogin(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTCOMBOLOGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnAccountPlatLogin(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONACCOUNTPLATLOGIN_OFFSET))(this, a1);
		}

		::System::Void OnRequestComboLogin(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* a1, ::MiHoYo::SDK::NetworkResponseModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONREQUESTCOMBOLOGIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnComboLoginCallback(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* a1, ::System::Action_1<::System::String*>* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, a1, a2, a3);
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

		::System::Void BoxConfigSync(::MiHoYo::SDK::BoxModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::BoxModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_BOXCONFIGSYNC_OFFSET))(this, a1);
		}

		::System::Void InGameSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_INGAMESYNC_OFFSET))(this);
		}

		::System::Void Logout(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUT_OFFSET))(this, a1);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, a1);
		}

		::System::Void OnLogoutSuccess(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONLOGOUTSUCCESS_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_SWITCHROLE_OFFSET))(this, a1);
		}

		::System::Void Exit(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_EXIT_OFFSET))(this, a1);
		}

		::System::Void RequestRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_REQUESTREDPOINT_OFFSET))(this);
		}

		::System::Void Bind(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_BIND_OFFSET))(this, a1);
		}

		::System::Void OnBindCallback(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONBINDCALLBACK_OFFSET))(this, a1, a2, a3);
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

		::System::Void OnGetPing(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONGETPING_OFFSET))(this, a1);
		}

		::System::Void BeforeVerify(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_BEFOREVERIFY_OFFSET))(this, a1);
		}

		::System::Void OnBeforeVerifyFailed(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_ONBEFOREVERIFYFAILED_OFFSET))(this, a1);
		}

		::System::String* CreateBeforeVerifyString(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_CREATEBEFOREVERIFYSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER_PAY_OFFSET))(this, a1, a2);
		}
	};
}
