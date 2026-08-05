#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/ReportStage.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/System/DateTime.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKCOLLECTIONSIDVALIDITY_OFFSET UNITYSDK_OFFSET(0x1CEABB20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1CEA9C70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1CEA7820)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKTOKENVALIDITY_OFFSET UNITYSDK_OFFSET(0x1CEAAFD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSUREAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1CEA9F50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSURECOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1CEAB990)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1CEA7FB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETACCOUNTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x1CEAA210)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CEA75C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETDEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1CEA8790)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1CEA80F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1CEAA460)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x1CEAA160)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1CEAA0C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1CEAA020)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_HANDLECOLLECTIONSIDERROR_OFFSET UNITYSDK_OFFSET(0x1CEABC20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_INIT_OFFSET UNITYSDK_OFFSET(0x1CEA75E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ISHANDHELD_OFFSET UNITYSDK_OFFSET(0x1CEA7E80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1CEA7A10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x1CEA80E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_OFFSET UNITYSDK_OFFSET(0x1CEA7E90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_1_OFFSET UNITYSDK_OFFSET(0x1CEA8950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1CEA8BF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1CEAAAE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1CEA9710)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1CEAAD60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_OPENXBOXCHECKOUT_OFFSET UNITYSDK_OFFSET(0x1CEAA4A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_PAY_OFFSET UNITYSDK_OFFSET(0x1CEA8F20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_QUERYPRODUCTANDPAY_OFFSET UNITYSDK_OFFSET(0x1CEA99F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1CEAC310)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1CEAB030)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_RESET_OFFSET UNITYSDK_OFFSET(0x1CEAA2C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SAVETOKENTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x1CEABE30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SCHEDULEDETECTPAYPOLLING_OFFSET UNITYSDK_OFFSET(0x1CEAA650)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SDKREPORTPAY_OFFSET UNITYSDK_OFFSET(0x1CEAA810)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_STARTPAYMENTFLOW_OFFSET UNITYSDK_OFFSET(0x1CEA9B20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CEA75D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAC680)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_0_OFFSET UNITYSDK_OFFSET(0x1CEACC10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_1_OFFSET UNITYSDK_OFFSET(0x1CEACCB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAC5D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__INIT_B__24_0_OFFSET UNITYSDK_OFFSET(0x1CEAC720)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_0_OFFSET UNITYSDK_OFFSET(0x1CEACD30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_1_OFFSET UNITYSDK_OFFSET(0x1CEACD40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_2_OFFSET UNITYSDK_OFFSET(0x1CEACD50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox_TypeDefinitionIndex = 20738;

	class HoYoChannelXbox : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelXbox_TypeDefinitionIndex)->GetStaticField(0x9D80);
		}
		// static const ::System::Int32 AUTH_TOKEN_EXPIRED_DAYS = 0xF; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN_KEY; // 0x0
		// static const ::System::Int32 MAX_RETRY_TIMES = 0x5; // 0x0
		// static const ::System::Single RETRY_INTERVAL_SECONDS; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::MiHoYo::SDK::PC::OS::XboxPayInfo* _currentPayInfo; // 0x10
		::System::Action_1<::System::String*>* _payCallback; // 0x18
		::System::String* _authToken; // 0x20
		::System::String* _xuid; // 0x28
		::System::String* _gamertag; // 0x30
		::System::String* _sandboxId; // 0x38
		::System::String* _collectionsId; // 0x40
		::System::String* _countryCode; // 0x48
		::System::DateTime _collectionsIdGenerateTime; // 0x50
		::System::Int32 _collectionsIdRetryTimes; // 0x58
		::System::DateTime _authTokenGenerateTime; // 0x60
		::System::Boolean _isRegionPurchaseSupported; // 0x68
		::System::Boolean _isCollectionsIdRetry; // 0x69
		::System::Boolean _isPaying; // 0x6A
		::System::Boolean _isChannelDllAvailable; // 0x6B
		::System::Boolean _isXboxHandheld; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_INIT_OFFSET))(this);
		}

		::System::Boolean IsHandheld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ISHANDHELD_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_OFFSET))(this, callback, forceRefresh);
		}

		::System::Void Login_1(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_1_OFFSET))(this, callback);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void Pay(::System::String* jsonPayInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_PAY_OFFSET))(this, jsonPayInfo, callback);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERNAME_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERID_OFFSET))(this);
		}

		::System::String* GetSandboxId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETSANDBOXID_OFFSET))(this);
		}

		::System::String* GetAccountCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETACCOUNTCOUNTRY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_RESET_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, msg);
		}

		::System::Void OnGetProductListError_1(::System::Action_1<::System::String*>* callback, ::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_1_OFFSET))(this, callback, errorCode);
		}

		::System::Void QueryProductAndPay(::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_QUERYPRODUCTANDPAY_OFFSET))(this, payInfo);
		}

		::System::Void StartPaymentFlow(::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_STARTPAYMENTFLOW_OFFSET))(this, payInfo);
		}

		::System::Void OpenXboxCheckout(::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_OPENXBOXCHECKOUT_OFFSET))(this, payInfo);
		}

		::System::Void ScheduleDetectPayPolling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SCHEDULEDETECTPAYPOLLING_OFFSET))(this);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::MiHoYo::SDK::PC::OS::XboxPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKFAIL_OFFSET))(this, msg, info);
		}

		::System::Void OnPayCallbackCancel(::MiHoYo::SDK::PC::OS::XboxPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKCANCEL_OFFSET))(this, info);
		}

		::System::Void OnPayCallbackSuccess(::MiHoYo::SDK::PC::OS::XboxPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKSUCCESS_OFFSET))(this, info);
		}

		::System::Void EnsureAuthToken(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSUREAUTHTOKEN_OFFSET))(this, callback);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTRETRIEVETOKEN_OFFSET))(this, callback);
		}

		::System::Void EnsureCollectionsId(::System::String* token, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSURECOLLECTIONSID_OFFSET))(this, token, callback);
		}

		::System::Void HandleCollectionsIdError(::System::Int32 errorCode, ::System::String* token, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_HANDLECOLLECTIONSIDERROR_OFFSET))(this, errorCode, token, callback);
		}

		::System::String* GetRetrieveTokenKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETRETRIEVETOKENKEY_OFFSET))(this);
		}

		::System::Void LoadStorageToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOADSTORAGETOKEN_OFFSET))(this);
		}

		::System::Void SaveTokenToStorage(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SAVETOKENTOSTORAGE_OFFSET))(this, token);
		}

		::System::Boolean CheckTokenValidity(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKTOKENVALIDITY_OFFSET))(this, createTime);
		}

		::System::Boolean CheckCollectionsIdValidity(::System::DateTime createTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKCOLLECTIONSIDVALIDITY_OFFSET))(this, createTime);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKREGION_OFFSET))(this);
		}

		::System::Void RequestDetectPay(::System::String* collectionsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTDETECTPAY_OFFSET))(this, collectionsId);
		}

		static ::MiHoYo::SDK::JSONObject* GetDefaultBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETDEFAULTBODY_OFFSET))();
		}

		::System::Void SDKReportPay(::MiHoYo::SDK::ReportStage stage, ::MiHoYo::SDK::PC::OS::XboxPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SDKREPORTPAY_OFFSET))(this, stage, info);
		}

		::System::Void _Init_b__24_0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* loginResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__INIT_B__24_0_OFFSET))(this, loginResult);
		}

		::System::Void _CheckEntitlements_b__30_0(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_0_OFFSET))(this, token);
		}

		::System::Void _CheckEntitlements_b__30_1(::System::String* collectionsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_1_OFFSET))(this, collectionsId);
		}

		::System::Void _ScheduleDetectPayPolling_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_0_OFFSET))(this);
		}

		::System::Void _ScheduleDetectPayPolling_b__42_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_1_OFFSET))(this);
		}

		::System::Void _ScheduleDetectPayPolling_b__42_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_2_OFFSET))(this);
		}
	};
}
