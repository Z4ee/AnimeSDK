#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_STEAMMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x15E927A0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x15E959D0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E961D0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x15E94330)
#define MIHOYO_SDK_WIN_STEAMMANAGER_DEDUCT_OFFSET UNITYSDK_OFFSET(0x15E928D0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETNICKNAME_OFFSET UNITYSDK_OFFSET(0x15E96620)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x15E931D0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETSTEAMID_OFFSET UNITYSDK_OFFSET(0x15E93110)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETTICKET_OFFSET UNITYSDK_OFFSET(0x15E93170)
#define MIHOYO_SDK_WIN_STEAMMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x15E92E70)
#define MIHOYO_SDK_WIN_STEAMMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15E92800)
#define MIHOYO_SDK_WIN_STEAMMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x15E92F80)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x15E95C90)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONDEDUCT_OFFSET UNITYSDK_OFFSET(0x15E92C30)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x15E938E0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x15E96460)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x15E96320)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x15E92E30)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x15E92D00)
#define MIHOYO_SDK_WIN_STEAMMANAGER_PAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x15E95B00)
#define MIHOYO_SDK_WIN_STEAMMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x15E93A10)
#define MIHOYO_SDK_WIN_STEAMMANAGER_SETAPPID_OFFSET UNITYSDK_OFFSET(0x15E92860)
#define MIHOYO_SDK_WIN_STEAMMANAGER_STOPTIMEOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x15E92B60)
#define MIHOYO_SDK_WIN_STEAMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E96680)
#define MIHOYO_SDK_WIN_STEAMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E92790)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SteamManager_TypeDefinitionIndex = 7974;

	class SteamManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::SteamManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SteamManager**)Il2CppClass::FromTypeDefinitionIndex(SteamManager_TypeDefinitionIndex)->GetStaticField(0x13AF0);
		}
		// static const ::System::String* env_retcode; // 0x0
		// static const ::System::String* amount_display_key; // 0x0
		// static const ::System::String* order_num; // 0x0
		::UnityEngine::Coroutine* timeOutCoroutine; // 0x10
		::System::Action_1<::System::String*>* payCallback; // 0x18
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x20
		::System::UInt32 SteamId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_INIT_OFFSET))(this);
		}

		::System::Void SetAppId(::System::String* steamId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_SETAPPID_OFFSET))(this, steamId);
		}

		::System::Void Deduct(::System::String* orderId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_DEDUCT_OFFSET))(this, orderId);
		}

		::System::Void OnDeduct(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONDEDUCT_OFFSET))(this, response);
		}

		static ::System::Void HandleLoginFlowNotification(::System::Int32 nRet, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET))(nRet, strMsg);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, callback);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void CreateOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_CREATEORDER_OFFSET))(this);
		}

		::System::Void PayTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_PAYTIMEOUT_OFFSET))(this);
		}

		::System::Void StopTimeOutCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_STOPTIMEOUTCOROUTINE_OFFSET))(this);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONCREATEORDER_OFFSET))(this, response);
		}

		::System::Boolean CheckParameters(::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_CHECKPARAMETERS_OFFSET))(this, payInfo);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, msg, code);
		}

		::System::String* CreateFailPayCallback(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, msg, code);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnLoginFail(::System::Int32 retcode, ::System::String* message, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONLOGINFAIL_OFFSET))(this, retcode, message, callback);
		}

		::System::Void GetTicket(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_GETTICKET_OFFSET))(this, callback);
		}

		::System::String* GetNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_GETNICKNAME_OFFSET))(this);
		}

		::System::UInt64 GetSteamId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_GETSTEAMID_OFFSET))(this);
		}
	};
}
