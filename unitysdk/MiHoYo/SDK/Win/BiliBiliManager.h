#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_AntiAddictionCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_InitCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_LoginCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_PayCallback; }
namespace MiHoYo::SDK { class BilibiliConfigModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ANTIADDICTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C975D90)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C976B40)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKDLL_OFFSET UNITYSDK_OFFSET(0x1C976D40)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x1C976E60)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x1C978080)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1C977740)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_INITRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C974D50)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C976EC0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGINRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C9752E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C977470)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1C977690)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C97ACF0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1C979CF0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITFAIL_OFFSET UNITYSDK_OFFSET(0x1C9772E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C9773D0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINCANCEL_OFFSET UNITYSDK_OFFSET(0x1C97ABA0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x1C9776C0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C97AB30)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x1C97AC80)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x1C978010)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C97AC10)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_OPENANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x1C977850)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_PAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C976100)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1C9778C0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x1C977440)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C97B0F0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9769B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager_TypeDefinitionIndex = 21068;

	class BiliBiliManager : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_initCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA2F0);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback** StaticGet_bAntiAddictionCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA2F8);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback** StaticGet_bLoginCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_LoginCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA300);
		}
		static ::System::Action_1<::System::String*>** StaticGet_loginCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA308);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_InitCallback** StaticGet_bInitCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_InitCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA310);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_PayCallback** StaticGet_bPayCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_PayCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA318);
		}
		static ::System::Action_1<::System::String*>** StaticGet_payCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA320);
		}
		static ::MiHoYo::SDK::Win::BiliBiliManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BiliBiliManager**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0xA328);
		}
		::MiHoYo::SDK::BilibiliConfigModel* configModel; // 0x10
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKCHANNEL_OFFSET))();
		}

		static ::System::Boolean CheckDll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKDLL_OFFSET))();
		}

		::System::Boolean CheckLocalParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKLOCALPARAMS_OFFSET))(this);
		}

		::System::Int32 Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_INIT_OFFSET))(this, callback);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGIN_OFFSET))(this, callback);
		}

		static ::System::Void HandleLoginFlowNotification(::System::Int32 nRet, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET))(nRet, strMsg);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGOUT_OFFSET))(this);
		}

		::System::Void OpenAntiAddiction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_OPENANTIADDICTION_OFFSET))(this);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* payInfo, ::MiHoYo::SDK::JSONNode* specialInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_CREATORDER_OFFSET))(this, payInfo, specialInfo, callback);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCREATEORDER_OFFSET))(this, response);
		}

		static ::System::Void InitResultCallback(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_INITRESULTCALLBACK_OFFSET))(buf, buflen);
		}

		static ::System::Void LoginResultCallback(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGINRESULTCALLBACK_OFFSET))(buf, buflen);
		}

		static ::System::Void AntiAddictionCallback(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ANTIADDICTIONCALLBACK_OFFSET))(buf, buflen);
		}

		static ::System::Void PayCallback(::System::String* buf, ::System::Int32 buflen)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_PAYCALLBACK_OFFSET))(buf, buflen);
		}

		static ::System::Void OnCallback(::System::Int32 ret, ::System::String* msg, ::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCALLBACK_OFFSET))(ret, msg, callback, data);
		}

		static ::System::Void OnInitSuccess(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITSUCCESS_OFFSET))(callback);
		}

		static ::System::Void OnInitFail(::System::Action_1<::System::String*>* callback, ::System::Int32 nRet, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITFAIL_OFFSET))(callback, nRet, msg);
		}

		static ::System::Void OnLoginSuccess(::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINSUCCESS_OFFSET))(callback, data);
		}

		static ::System::Void OnLoginFail(::System::Action_1<::System::String*>* callback, ::System::Int32 nRet, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINFAIL_OFFSET))(callback, nRet, msg);
		}

		static ::System::Void OnLoginCancel(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINCANCEL_OFFSET))(callback);
		}

		static ::System::Void OnPayFail(::System::Action_1<::System::String*>* callback, ::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYFAIL_OFFSET))(callback, msg, code);
		}

		static ::System::Void OnPayCancel(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYCANCEL_OFFSET))(callback);
		}

		static ::System::Void OnPaySuccess(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYSUCCESS_OFFSET))(callback);
		}
	};
}
