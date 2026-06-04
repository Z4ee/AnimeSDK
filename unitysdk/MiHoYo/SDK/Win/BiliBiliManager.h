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

#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ANTIADDICTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x18470270)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x18470DF0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKDLL_OFFSET UNITYSDK_OFFSET(0x18470FC0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x18471120)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x18472040)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x18471950)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_INITRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1846F5F0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x18471180)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGINRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1846FA80)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x184716D0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x184718D0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x18474CC0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x18473A60)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITFAIL_OFFSET UNITYSDK_OFFSET(0x18471560)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONINITSUCCESS_OFFSET UNITYSDK_OFFSET(0x18471660)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINCANCEL_OFFSET UNITYSDK_OFFSET(0x18474C00)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x18471900)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x18474BC0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x18474C80)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x18472000)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x18474C40)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_OPENANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x18471A60)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_PAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x18470510)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x18471AC0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x184716A0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18474F90)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18470C20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager_TypeDefinitionIndex = 8981;

	class BiliBiliManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback** StaticGet_bAntiAddictionCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BC0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_loginCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BC8);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback** StaticGet_bLoginCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_LoginCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BD0);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_InitCallback** StaticGet_bInitCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_InitCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BD8);
		}
		static ::System::Action_1<::System::String*>** StaticGet_payCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BE0);
		}
		static ::MiHoYo::SDK::Win::BiliBiliManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BiliBiliManager**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BE8);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_PayCallback** StaticGet_bPayCallback()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_PayCallback**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BF0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_initCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager_TypeDefinitionIndex)->GetStaticField(0x25BF8);
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
