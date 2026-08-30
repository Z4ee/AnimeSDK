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

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKCOLLECTIONSIDVALIDITY_OFFSET UNITYSDK_OFFSET(0x1BA31DC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA301E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1BA2E060)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKTOKENVALIDITY_OFFSET UNITYSDK_OFFSET(0x1BA31490)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSUREAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1BA303D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSURECOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1BA31C00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BA2E7D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETACCOUNTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x1BA306A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA2DDE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETDEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1BA2EFA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BA2E920)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1BA308E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x1BA305F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1BA30550)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1BA304B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_HANDLECOLLECTIONSIDERROR_OFFSET UNITYSDK_OFFSET(0x1BA31E90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_INIT_OFFSET UNITYSDK_OFFSET(0x1BA2DE00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ISHANDHELD_OFFSET UNITYSDK_OFFSET(0x1BA2E670)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1BA2E240)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x1BA2E910)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BA2E680)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_1_OFFSET UNITYSDK_OFFSET(0x1BA2F0B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BA2F290)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BA310C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BA2FD10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA312B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_OPENXBOXCHECKOUT_OFFSET UNITYSDK_OFFSET(0x1BA30950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_PAY_OFFSET UNITYSDK_OFFSET(0x1BA2F4E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_QUERYPRODUCTANDPAY_OFFSET UNITYSDK_OFFSET(0x1BA2FF40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1BA32440)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1BA31540)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_RESET_OFFSET UNITYSDK_OFFSET(0x1BA30750)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SAVETOKENTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BA32140)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SCHEDULEDETECTPAYPOLLING_OFFSET UNITYSDK_OFFSET(0x1BA30B40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SDKREPORTPAY_OFFSET UNITYSDK_OFFSET(0x1BA30EF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_STARTPAYMENTFLOW_OFFSET UNITYSDK_OFFSET(0x1BA30080)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA2DDF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA32760)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_0_OFFSET UNITYSDK_OFFSET(0x1BA32CB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_1_OFFSET UNITYSDK_OFFSET(0x1BA32D70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA326D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__INIT_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BA32800)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_0_OFFSET UNITYSDK_OFFSET(0x1BA32DF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_1_OFFSET UNITYSDK_OFFSET(0x1BA32E00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_2_OFFSET UNITYSDK_OFFSET(0x1BA32E10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox_TypeDefinitionIndex = 8585;

	class HoYoChannelXbox : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelXbox_TypeDefinitionIndex)->GetStaticField(0x215B0);
		}
		// static const ::System::Int32 AUTH_TOKEN_EXPIRED_DAYS = 0xF; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN_KEY; // 0x0
		// static const ::System::Int32 MAX_RETRY_TIMES = 0x5; // 0x0
		// static const ::System::Single RETRY_INTERVAL_SECONDS; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::String* _gamertag; // 0x10
		::MiHoYo::SDK::PC::OS::XboxPayInfo* _currentPayInfo; // 0x18
		::System::String* _collectionsId; // 0x20
		::System::String* _countryCode; // 0x28
		::System::String* _xuid; // 0x30
		::System::String* _sandboxId; // 0x38
		::System::Action_1<::System::String*>* _payCallback; // 0x40
		::System::String* _authToken; // 0x48
		::System::Boolean _isChannelDllAvailable; // 0x50
		::System::Boolean _isPaying; // 0x51
		::System::Boolean _isXboxHandheld; // 0x52
		::System::Int32 _collectionsIdRetryTimes; // 0x54
		::System::Boolean _isRegionPurchaseSupported; // 0x58
		::System::Boolean _isCollectionsIdRetry; // 0x59
		::System::DateTime _collectionsIdGenerateTime; // 0x60
		::System::DateTime _authTokenGenerateTime; // 0x68

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

		::System::Void Login(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_OFFSET))(this, a1, a2);
		}

		::System::Void Login_1(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_1_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_PAY_OFFSET))(this, a1, a2);
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

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError_1(::System::Action_1<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_1_OFFSET))(this, a1, a2);
		}

		::System::Void QueryProductAndPay(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_QUERYPRODUCTANDPAY_OFFSET))(this, a1);
		}

		::System::Void StartPaymentFlow(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_STARTPAYMENTFLOW_OFFSET))(this, a1);
		}

		::System::Void OpenXboxCheckout(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_OPENXBOXCHECKOUT_OFFSET))(this, a1);
		}

		::System::Void ScheduleDetectPayPolling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SCHEDULEDETECTPAYPOLLING_OFFSET))(this);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::MiHoYo::SDK::PC::OS::XboxPayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKCANCEL_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackSuccess(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKSUCCESS_OFFSET))(this, a1);
		}

		::System::Void EnsureAuthToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSUREAUTHTOKEN_OFFSET))(this, a1);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTRETRIEVETOKEN_OFFSET))(this, a1);
		}

		::System::Void EnsureCollectionsId(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSURECOLLECTIONSID_OFFSET))(this, a1, a2);
		}

		::System::Void HandleCollectionsIdError(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_HANDLECOLLECTIONSIDERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetRetrieveTokenKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETRETRIEVETOKENKEY_OFFSET))(this);
		}

		::System::Void LoadStorageToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOADSTORAGETOKEN_OFFSET))(this);
		}

		::System::Void SaveTokenToStorage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SAVETOKENTOSTORAGE_OFFSET))(this, a1);
		}

		::System::Boolean CheckTokenValidity(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKTOKENVALIDITY_OFFSET))(this, a1);
		}

		::System::Boolean CheckCollectionsIdValidity(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKCOLLECTIONSIDVALIDITY_OFFSET))(this, a1);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKREGION_OFFSET))(this);
		}

		::System::Void RequestDetectPay(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTDETECTPAY_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::JSONObject* GetDefaultBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETDEFAULTBODY_OFFSET))();
		}

		::System::Void SDKReportPay(::MiHoYo::SDK::ReportStage a1, ::MiHoYo::SDK::PC::OS::XboxPayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SDKREPORTPAY_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__24_0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__INIT_B__24_0_OFFSET))(this, a1);
		}

		::System::Void _CheckEntitlements_b__30_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_0_OFFSET))(this, a1);
		}

		::System::Void _CheckEntitlements_b__30_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_1_OFFSET))(this, a1);
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
