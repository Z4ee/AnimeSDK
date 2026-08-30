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

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA2C230)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKPAYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BA298E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BA29720)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1BA28220)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA278D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BA28370)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1BA28340)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1BA28320)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_INIT_OFFSET UNITYSDK_OFFSET(0x1BA27960)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BA28130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1BA27E10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BA2ADF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONDEDUCT_OFFSET UNITYSDK_OFFSET(0x1BA2BDD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGAMEOVERLAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA2BC80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BA28810)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONMICROTXNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA2B690)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BA29510)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA2BE50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_OVERLAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BA2C180)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BA2BF80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAY_OFFSET UNITYSDK_OFFSET(0x1BA28C00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_STOPOVERLAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1BA2BA20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_STOPTIMEOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1BA2B950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA278E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2C2E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__INIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x1BA2C320)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelSteam_TypeDefinitionIndex = 8635;

	class HoYoChannelSteam : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		// static const ::System::String* ENV_RETCODE; // 0x0
		// static const ::System::String* AMOUNT_DISPLAY_KEY; // 0x0
		// static const ::System::String* ORDER_NUM; // 0x0
		::UnityEngine::Coroutine* _overlayCoroutine; // 0x10
		::System::Action_1<::System::String*>* _payCallback; // 0x18
		::System::String* _userSteamId; // 0x20
		::System::String* _nickName; // 0x28
		::UnityEngine::Coroutine* _timeOutCoroutine; // 0x30
		::MiHoYo::SDK::PC::OS::SteamPayInfo* _steamPayInfo; // 0x38
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

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_LOGIN_OFFSET))(this, a1);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETUSERNAME_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETUSERID_OFFSET))(this);
		}

		::System::Void GetAuthTicket(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETAUTHTICKET_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGETPRODUCTLISTERROR_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void CreateOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CREATEORDER_OFFSET))(this);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONCREATEORDER_OFFSET))(this, a1);
		}

		::System::Void OnMicroTxnCallback(::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelMicroTxnResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONMICROTXNCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnGameOverlayCallback(::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelGameOverlayResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONGAMEOVERLAYCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnDeduct(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONDEDUCT_OFFSET))(this, a1);
		}

		::System::Boolean CheckPayParameters(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKPAYPARAMETERS_OFFSET))(this, a1);
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

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void _Init_b__14_0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM__INIT_B__14_0_OFFSET))(this, a1);
		}
	};
}
