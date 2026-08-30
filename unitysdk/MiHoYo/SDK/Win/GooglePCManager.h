#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class GoogleOAuthServer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_AUTOCHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x15D3DCE0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x15D1E400)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOAUTHRESULT_OFFSET UNITYSDK_OFFSET(0x15D3A1D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOUTENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x15D3CE30)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x15D3D1F0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x15D3B2B0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15D39E00)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINAUTHSUCCESS_OFFSET UNITYSDK_OFFSET(0x15D3A640)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINCHECKOAUTH_OFFSET UNITYSDK_OFFSET(0x15D39E40)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONAUTHCALLBACKFAILED_OFFSET UNITYSDK_OFFSET(0x15D3B1D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONBACKAUTH_OFFSET UNITYSDK_OFFSET(0x15D3A970)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONFINISHAUTH_OFFSET UNITYSDK_OFFSET(0x15D3AB60)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x15D3B960)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGOOGLEPCTOKENERROR_OFFSET UNITYSDK_OFFSET(0x15D3C1D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x15D3D7F0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x15D3C420)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x15D3DAE0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONSTARTAUTH_OFFSET UNITYSDK_OFFSET(0x15D3A940)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_1_OFFSET UNITYSDK_OFFSET(0x15D3C7D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x15D1E460)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTGOOGLEQUERYGOODS_OFFSET UNITYSDK_OFFSET(0x15D3BBC0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHINFO_OFFSET UNITYSDK_OFFSET(0x15D39ED0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHRESULT_OFFSET UNITYSDK_OFFSET(0x15D3A290)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWAUTHERROR_OFFSET UNITYSDK_OFFSET(0x15D3B040)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWGOOGLEWEBPAY_OFFSET UNITYSDK_OFFSET(0x15D3CBE0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x15D3AFE0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3DD00)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CHECKOAUTHRESULT_B__14_0_OFFSET UNITYSDK_OFFSET(0x15D3E3F0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3DCF0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__LOGINCHECKOAUTH_B__13_0_OFFSET UNITYSDK_OFFSET(0x15D3DD30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager_TypeDefinitionIndex = 9276;

	class GooglePCManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GooglePCManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GooglePCManager**)Il2CppClass::FromTypeDefinitionIndex(GooglePCManager_TypeDefinitionIndex)->GetStaticField(0x139D0);
		}
		::System::String* payDeepLink; // 0x10
		::System::Action* OnBack; // 0x18
		::System::Action_1<::System::String*>* OnAuthFailed; // 0x20
		::System::Action_1<::System::String*>* payCallback; // 0x28
		::MiHoYo::SDK::AccountModel* accountModel; // 0x30
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x38
		::System::String* oauthDeepLink; // 0x40
		::MiHoYo::SDK::Win::GoogleOAuthServer* server; // 0x48
		::System::Action* OnAuthSuccess; // 0x50
		::System::Boolean isPaying; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Void LoginCheckOAuth(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINCHECKOAUTH_OFFSET))(this, a1);
		}

		::System::Void CheckOAuthResult(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOAUTHRESULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LoginAuthSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINAUTHSUCCESS_OFFSET))(this);
		}

		::System::Void OnStartAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONSTARTAUTH_OFFSET))(this);
		}

		::System::Void OnBackAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONBACKAUTH_OFFSET))(this);
		}

		::System::Void OnFinishAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONFINISHAUTH_OFFSET))(this);
		}

		::System::Void ShowAuthError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWAUTHERROR_OFFSET))(this, a1);
		}

		::System::Void OnAuthCallbackFailed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONAUTHCALLBACKFAILED_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnGooglePCTokenError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGOOGLEPCTOKENERROR_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void Pay_1(::MiHoYo::SDK::JSONNode* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void ShowGoogleWebPay(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWGOOGLEWEBPAY_OFFSET))(this, a1, a2);
		}

		::System::Void CheckoutEntitlements(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOUTENTITLEMENTS_OFFSET))(this, a1);
		}

		::System::Void RequestOAuthInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHINFO_OFFSET))(this, a1, a2);
		}

		::System::Void RequestOAuthResult(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHRESULT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RequestGoogleQueryGoods(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTGOOGLEQUERYGOODS_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void DetectPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a9)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_DETECTPAY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void OnPayCallbackFail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void ShowTips(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWTIPS_OFFSET))(this, a1);
		}

		::System::Void AutoCheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_AUTOCHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void _LoginCheckOAuth_b__13_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__LOGINCHECKOAUTH_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _CheckOAuthResult_b__14_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CHECKOAUTHRESULT_B__14_0_OFFSET))(this, a1);
		}
	};
}
