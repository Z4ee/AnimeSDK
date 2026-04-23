#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGameOverlayResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelMicroTxnResult; }
namespace MiHoYo::SDK::PC::OS { class SteamPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x175B34A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKPAYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x175B0E40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x175B0B20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x175AF720)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x175AEE60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x175AF830)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x175AF800)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_INIT_OFFSET UNITYSDK_OFFSET(0x175AEEF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_LOGIN_OFFSET UNITYSDK_OFFSET(0x175AF640)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x175AF320)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x175B2090)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONDEDUCT_OFFSET UNITYSDK_OFFSET(0x175B3010)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x175B2EB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x175AFD20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x175B2890)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x175B09B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x175B3090)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_OVERLAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x175B33F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x175B31C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAY_OFFSET UNITYSDK_OFFSET(0x175B0110)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_STOPOVERLAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x175B2C50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_STOPTIMEOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x175B2B80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x175AEE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x175A35E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__INIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x175B3550)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelSteam_TypeDefinitionIndex = 7561;

	class HoYoChannelSteam : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		// static const ::System::String* ENV_RETCODE; // 0x0
		// static const ::System::String* AMOUNT_DISPLAY_KEY; // 0x0
		// static const ::System::String* ORDER_NUM; // 0x0
		::System::String* _userSteamId; // 0x10
		::System::Action_1<::System::String*>* _payCallback; // 0x18
		::MiHoYo::SDK::PC::OS::SteamPayInfo* _steamPayInfo; // 0x20
		::UnityEngine::Coroutine* _overlayCoroutine; // 0x28
		::System::String* _nickName; // 0x30
		::UnityEngine::Coroutine* _timeOutCoroutine; // 0x38
		::System::UInt32 _steamAppId; // 0x40
		::System::Boolean _isInitialized; // 0x44
		::System::Boolean _isChannelDllAvailable; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_INIT_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_LOGIN_OFFSET))(this, callback);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETUSERNAME_OFFSET))(this);
		}

		::System::Void GetAuthTicket(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETAUTHTICKET_OFFSET))(this, callback);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGETPRODUCTLISTERROR_OFFSET))(this, callback);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void CreateOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CREATEORDER_OFFSET))(this);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONCREATEORDER_OFFSET))(this, response);
		}

		::System::Void OnMicroTxnCallback(::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONMICROTXNCALLBACK_OFFSET))(this, result);
		}

		::System::Void OnGameOverlayCallback(::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGAMEOVERLAYCALLBACK_OFFSET))(this, result);
		}

		::System::Void OnDeduct(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONDEDUCT_OFFSET))(this, response);
		}

		::System::Boolean CheckPayParameters(::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKPAYPARAMETERS_OFFSET))(this, payInfo);
		}

		::System::Void PayTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAYTIMEOUT_OFFSET))(this);
		}

		::System::Void OverlayTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_OVERLAYTIMEOUT_OFFSET))(this);
		}

		::System::Void StopTimeOutCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_STOPTIMEOUTCOROUTINE_OFFSET))(this);
		}

		::System::Void StopOverlayCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_STOPOVERLAYCOROUTINE_OFFSET))(this);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKFAIL_OFFSET))(this, msg, code);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void _Init_b__14_0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* loginResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__INIT_B__14_0_OFFSET))(this, loginResult);
		}
	};
}
