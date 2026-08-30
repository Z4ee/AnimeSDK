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

#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ANTIADDICTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CDD1E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x15CDDF50)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKDLL_OFFSET UNITYSDK_OFFSET(0x15CDE120)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x15CDE280)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x15CDF190)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x15CDEAB0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_INITRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CDC0E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15CDE2E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGINRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CDC640)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x15CDE830)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x15CDEA30)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CE1D70)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x15CE0C30)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITFAIL_OFFSET UNITYSDK_OFFSET(0x15CDE6C0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITSUCCESS_OFFSET UNITYSDK_OFFSET(0x15CDE7C0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINCANCEL_OFFSET UNITYSDK_OFFSET(0x15CE1CB0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x15CDEA60)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x15CE1C70)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x15CE1D30)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x15CDF150)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x15CE1CF0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_OPENANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x15CDEBB0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_PAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CDD550)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x15CDEC10)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x15CDE800)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CE2040)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15CDDD80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager_TypeDefinitionIndex = 9263;

	class BiliBiliManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BiliBiliManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BiliBiliManager**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26230);
		}
		static ::System::Action_1<::System::String*>** StaticGet_payCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26238);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_PayCallback** StaticGet_bPayCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_PayCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26240);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback** StaticGet_bLoginCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_LoginCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26248);
		}
		static ::System::Action_1<::System::String*>** StaticGet_loginCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26250);
		}
		static ::System::Action_1<::System::String*>** StaticGet_initCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26258);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback** StaticGet_bAntiAddictionCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26260);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_InitCallback** StaticGet_bInitCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_InitCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x26268);
		}
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x10
		::MiHoYo::SDK::BilibiliConfigModel* configModel; // 0x18

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

		::System::Int32 Init(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGIN_OFFSET))(this, a1);
		}

		static ::System::Void HandleLoginFlowNotification(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET))(a1, a2);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGOUT_OFFSET))(this);
		}

		::System::Void OpenAntiAddiction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_OPENANTIADDICTION_OFFSET))(this);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_CREATORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCREATEORDER_OFFSET))(this, a1);
		}

		static ::System::Void InitResultCallback(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_INITRESULTCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void LoginResultCallback(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGINRESULTCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void AntiAddictionCallback(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ANTIADDICTIONCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void PayCallback(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_PAYCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void OnCallback(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::MiHoYo::SDK::JSONNode* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OnInitSuccess(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITSUCCESS_OFFSET))(a1);
		}

		static ::System::Void OnInitFail(::System::Action_1<::System::String*>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITFAIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OnLoginSuccess(::System::Action_1<::System::String*>* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINSUCCESS_OFFSET))(a1, a2);
		}

		static ::System::Void OnLoginFail(::System::Action_1<::System::String*>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINFAIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OnLoginCancel(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINCANCEL_OFFSET))(a1);
		}

		static ::System::Void OnPayFail(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYFAIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OnPayCancel(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYCANCEL_OFFSET))(a1);
		}

		static ::System::Void OnPaySuccess(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYSUCCESS_OFFSET))(a1);
		}
	};
}
