#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WIN_EOSMANAGER_CHANGESUBCHANNELTOOFFICAL_OFFSET UNITYSDK_OFFSET(0x1C3A19D0)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C3A1C70)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKDLL_OFFSET UNITYSDK_OFFSET(0x1C3A17C0)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1C3A3C10)
#define MIHOYO_SDK_WIN_EOSMANAGER_CHECKLOCALPARAMS_OFFSET UNITYSDK_OFFSET(0x1C3A1B00)
#define MIHOYO_SDK_WIN_EOSMANAGER_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x1C3A3E30)
#define MIHOYO_SDK_WIN_EOSMANAGER_GETCMDLINEMAP_OFFSET UNITYSDK_OFFSET(0x1C3A1D00)
#define MIHOYO_SDK_WIN_EOSMANAGER_GETLAUNCHPARAMS_OFFSET UNITYSDK_OFFSET(0x1C3A1BF0)
#define MIHOYO_SDK_WIN_EOSMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1C3A2150)
#define MIHOYO_SDK_WIN_EOSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C3A1170)
#define MIHOYO_SDK_WIN_EOSMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C3A32C0)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3A4BA0)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3A2E30)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3A2920)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x1C3A4F00)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x1C3A34F0)
#define MIHOYO_SDK_WIN_EOSMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C3A5140)
#define MIHOYO_SDK_WIN_EOSMANAGER_PAY_1_OFFSET UNITYSDK_OFFSET(0x1C3A37D0)
#define MIHOYO_SDK_WIN_EOSMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1C3A32F0)
#define MIHOYO_SDK_WIN_EOSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3A5450)
#define MIHOYO_SDK_WIN_EOSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A5370)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int EOSManager_TypeDefinitionIndex = 21060;

	class EOSManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cmdLineMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EOSManager_TypeDefinitionIndex)->GetStaticField(0xA2B0);
		}
		static ::MiHoYo::SDK::Win::EOSManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::EOSManager**)Il2CppClass::FromTypeDefinitionIndex(EOSManager_TypeDefinitionIndex)->GetStaticField(0xA2B8);
		}
		::MiHoYo::SDK::JSONArray* productList; // 0x10
		::System::Boolean hasInit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Boolean CheckDll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKDLL_OFFSET))(this);
		}

		::System::Boolean CheckLocalParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKLOCALPARAMS_OFFSET))(this);
		}

		::System::Boolean GetLaunchParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_GETLAUNCHPARAMS_OFFSET))(this);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void Login(::System::Action_2<::System::Int32, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void Pay_1(::MiHoYo::SDK::JSONNode* payInfo, ::System::String* payTrace, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_PAY_1_OFFSET))(this, payInfo, payTrace, callback);
		}

		::System::Void CheckEntitlements(::System::String* traceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHECKENTITLEMENTS_OFFSET))(this, traceId);
		}

		static ::System::Void DetectPay(::System::String* aid, ::System::String* token, ::System::String* game, ::System::String* region, ::System::String* uid, ::System::String* device, ::System::String* delivery_url, ::System::String* identityId, ::System::String* authToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_DETECTPAY_OFFSET))(aid, token, game, region, uid, device, delivery_url, identityId, authToken, callback);
		}

		::System::Void OnPayFail(::System::Action_1<::System::String*>* callback, ::System::String* msg, ::System::String* payTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONPAYFAIL_OFFSET))(this, callback, msg, payTrace);
		}

		::System::Void OnPayCancel(::System::Action_1<::System::String*>* callback, ::System::String* payTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONPAYCANCEL_OFFSET))(this, callback, payTrace);
		}

		::System::Void OnPaySuccess(::System::Action_1<::System::String*>* callback, ::System::String* payTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONPAYSUCCESS_OFFSET))(this, callback, payTrace);
		}

		static ::System::Void OnCallback(::System::Int32 ret, ::System::String* msg, ::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONCALLBACK_OFFSET))(ret, msg, callback, data);
		}

		::System::Void OnGetProductListCallback(::System::Action_1<::System::String*>* callback, ::System::String* productTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTCALLBACK_OFFSET))(this, callback, productTrace);
		}

		::System::Void OnGetProductListErrorCallback(::System::Action_1<::System::String*>* callback, ::System::String* msg, ::System::String* productTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_ONGETPRODUCTLISTERRORCALLBACK_OFFSET))(this, callback, msg, productTrace);
		}

		::System::Void GetCmdLineMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_GETCMDLINEMAP_OFFSET))(this);
		}

		::System::Void ChangeSubChannelToOffical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER_CHANGESUBCHANNELTOOFFICAL_OFFSET))(this);
		}
	};
}
