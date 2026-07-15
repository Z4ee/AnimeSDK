#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_STEAMMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x1718AB70)
#define MIHOYO_SDK_WIN_STEAMMANAGER_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1718DF30)
#define MIHOYO_SDK_WIN_STEAMMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1718E720)
#define MIHOYO_SDK_WIN_STEAMMANAGER_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1718C5F0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_DEDUCT_OFFSET UNITYSDK_OFFSET(0x1718AC60)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETNICKNAME_OFFSET UNITYSDK_OFFSET(0x1718EB80)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1718B480)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETSTEAMID_OFFSET UNITYSDK_OFFSET(0x1718B420)
#define MIHOYO_SDK_WIN_STEAMMANAGER_GETTICKET_OFFSET UNITYSDK_OFFSET(0x1718B450)
#define MIHOYO_SDK_WIN_STEAMMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1718B1D0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1718ABD0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1718B2D0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1718E170)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONDEDUCT_OFFSET UNITYSDK_OFFSET(0x1718AFD0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1718BB30)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x1718E9B0)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1718E870)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1718B190)
#define MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1718B060)
#define MIHOYO_SDK_WIN_STEAMMANAGER_PAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1718E020)
#define MIHOYO_SDK_WIN_STEAMMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1718BC60)
#define MIHOYO_SDK_WIN_STEAMMANAGER_SETAPPID_OFFSET UNITYSDK_OFFSET(0x1718AC00)
#define MIHOYO_SDK_WIN_STEAMMANAGER_STOPTIMEOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1718AF00)
#define MIHOYO_SDK_WIN_STEAMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1718EBB0)
#define MIHOYO_SDK_WIN_STEAMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1718AB60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SteamManager_TypeDefinitionIndex = 9035;

	class SteamManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::SteamManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SteamManager**)Il2CppClass::FromTypeDefinitionIndex(SteamManager_TypeDefinitionIndex)->GetStaticField(0x1D470);
		}
		// static const ::System::String* env_retcode; // 0x0
		// static const ::System::String* amount_display_key; // 0x0
		// static const ::System::String* order_num; // 0x0
		::UnityEngine::Coroutine* timeOutCoroutine; // 0x10
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x18
		::System::Action_1<::System::String*>* payCallback; // 0x20
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

		::System::Void SetAppId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_SETAPPID_OFFSET))(this, a1);
		}

		::System::Void Deduct(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_DEDUCT_OFFSET))(this, a1);
		}

		::System::Void OnDeduct(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONDEDUCT_OFFSET))(this, a1);
		}

		static ::System::Void HandleLoginFlowNotification(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET))(a1, a2);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_PAY_OFFSET))(this, a1, a2);
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

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONCREATEORDER_OFFSET))(this, a1);
		}

		::System::Boolean CheckParameters(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_CHECKPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnLoginFail(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_ONLOGINFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetTicket(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER_GETTICKET_OFFSET))(this, a1);
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
