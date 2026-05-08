#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class AgeGateTicketUpdateModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_REQUESTMANAGER_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x18DD9860)
#define MIHOYO_SDK_REQUESTMANAGER_BINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x18DDAFA0)
#define MIHOYO_SDK_REQUESTMANAGER_BINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x18DD9500)
#define MIHOYO_SDK_REQUESTMANAGER_GETCURRENCYANDCOUNTRYBYIP_OFFSET UNITYSDK_OFFSET(0x18DDC5F0)
#define MIHOYO_SDK_REQUESTMANAGER_GETMAILVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x18DD5E60)
#define MIHOYO_SDK_REQUESTMANAGER_GETMOBILEVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x18DD80B0)
#define MIHOYO_SDK_REQUESTMANAGER_GETTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x18DD5750)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_1_OFFSET UNITYSDK_OFFSET(0x18DD7870)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x18DD7680)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x18DD7180)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYGUEST_OFFSET UNITYSDK_OFFSET(0x18DD7A60)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYMOBILECODE_OFFSET UNITYSDK_OFFSET(0x18DD8290)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_1_OFFSET UNITYSDK_OFFSET(0x18DD6D20)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x18DD68C0)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_1_OFFSET UNITYSDK_OFFSET(0x18DD8960)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_OFFSET UNITYSDK_OFFSET(0x18DD8690)
#define MIHOYO_SDK_REQUESTMANAGER_MOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x18DD6390)
#define MIHOYO_SDK_REQUESTMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x18DDA060)
#define MIHOYO_SDK_REQUESTMANAGER_QUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x18DD90F0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTABTEST_OFFSET UNITYSDK_OFFSET(0x18DDB610)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATELOADTICKET_OFFSET UNITYSDK_OFFSET(0x18DA85F0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPARENTALCONSENTEMAIL_OFFSET UNITYSDK_OFFSET(0x18DDD620)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPAYPREORDERVALIDATION_OFFSET UNITYSDK_OFFSET(0x18DDD9A0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATERESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x18DAC2C0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x18DAB4E0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTBINDEMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x18DD5B00)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTGETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x18DDD050)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPAYDIALOGABTESTCN_OFFSET UNITYSDK_OFFSET(0x18DDBF40)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x18DDC6F0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x18DDC340)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTQRCODE_OFFSET UNITYSDK_OFFSET(0x18DD8D80)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTREDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x18DDAA90)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTSENDNOTICEEMAIL_OFFSET UNITYSDK_OFFSET(0x18DDCC90)
#define MIHOYO_SDK_REQUESTMANAGER_VERIFYMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x18DD6050)
#define MIHOYO_SDK_REQUESTMANAGER_VERIFYMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x18DD6580)
#define MIHOYO_SDK_REQUESTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DDDFA0)
#define MIHOYO_SDK_REQUESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDDF90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager_TypeDefinitionIndex = 18924;

	class RequestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RequestManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::RequestManager**)Il2CppClass::FromTypeDefinitionIndex(RequestManager_TypeDefinitionIndex)->GetStaticField(0x9760);
		}
		// static const ::System::String* TICKET; // 0x0
		// static const ::System::String* X_RPC_APP_ID; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void GetTicketByToken(::System::String* accountId, ::System::String* token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::String* actionType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETTICKETBYTOKEN_OFFSET))(this, accountId, token, callback, actionType);
		}

		::System::Void RequestBindEmailByCode(::System::String* email, ::System::String* captcha, ::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTBINDEMAILBYCODE_OFFSET))(this, email, captcha, actionTicket, callback);
		}

		::System::Void GetMailVerifyCode(::System::String* actionType, ::System::String* actionTicket, ::System::String* email, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETMAILVERIFYCODE_OFFSET))(this, actionType, actionTicket, email, callback);
		}

		::System::Void VerifyMailCaptcha(::System::String* actionTicket, ::System::String* actionType, ::System::String* captcha, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_VERIFYMAILCAPTCHA_OFFSET))(this, actionTicket, actionType, captcha, callback);
		}

		::System::Void MobileCaptcha(::System::String* mobile, ::System::String* ticket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::String* actionType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_MOBILECAPTCHA_OFFSET))(this, mobile, ticket, callback, actionType);
		}

		::System::Void VerifyMobileCaptcha(::System::String* actionTicket, ::System::String* actionType, ::System::String* captcha, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_VERIFYMOBILECAPTCHA_OFFSET))(this, actionTicket, actionType, captcha, callback);
		}

		::System::Void LoginByThirdParty(::System::String* type, ::System::String* token, ::System::String* redirectUrl, ::System::Boolean no_regist, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_OFFSET))(this, type, token, redirectUrl, no_regist, callback);
		}

		::System::Void LoginByThirdParty_1(::System::String* type, ::System::String* token, ::System::String* redirectUrl, ::System::Boolean no_regist, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_1_OFFSET))(this, type, token, redirectUrl, no_regist, callback);
		}

		::System::Void LoginByAuthTicket(::System::String* authTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* exHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYAUTHTICKET_OFFSET))(this, authTicket, callback, exHeaders);
		}

		::System::Void LoginByAccount(::System::String* account, ::System::String* password, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_OFFSET))(this, account, password, callback);
		}

		::System::Void LoginByAccount_1(::System::String* account, ::System::String* password, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_1_OFFSET))(this, account, password, callback);
		}

		::System::Void LoginByGuest(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYGUEST_OFFSET))(this, callback);
		}

		::System::Void GetMobileVerifyCode(::System::String* mobile, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETMOBILEVERIFYCODE_OFFSET))(this, mobile, callback);
		}

		::System::Void LoginByMobileCode(::System::String* mobile, ::System::String* captcha, ::System::String* action, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYMOBILECODE_OFFSET))(this, mobile, captcha, action, callback);
		}

		::System::Void LoginByToken(::System::String* uid, ::System::String* token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_OFFSET))(this, uid, token, callback);
		}

		::System::Void LoginByToken_1(::System::String* uid, ::System::String* token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_1_OFFSET))(this, uid, token, callback);
		}

		::System::Void RequestQRCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTQRCODE_OFFSET))(this, callback);
		}

		::System::Void QueryQRCode(::System::String* ticket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_QUERYQRCODE_OFFSET))(this, ticket, callback);
		}

		::System::Void BindThirdParty(::System::String* ticket, ::System::String* thirdParty, ::System::String* accessToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BINDTHIRDPARTY_OFFSET))(this, ticket, thirdParty, accessToken, callback);
		}

		::System::Void BeforeVerify(::System::String* app_id, ::System::String* channel_id, ::System::String* open_id, ::System::String* combo_token, ::System::String* role_id, ::System::String* region, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BEFOREVERIFY_OFFSET))(this, app_id, channel_id, open_id, combo_token, role_id, region, callback);
		}

		::System::Void Ping(::System::String* openId, ::System::String* comboToken, ::System::Int64 totalTime, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_PING_OFFSET))(this, openId, comboToken, totalTime, callback);
		}

		::System::Void RequestRedPointInfo(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTREDPOINTINFO_OFFSET))(this, callback, timeoutCallback);
		}

		::System::Void BindAccount(::System::String* aid, ::System::String* device, ::System::String* game_key, ::System::String* guest_id, ::System::String* region, ::System::String* token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BINDACCOUNT_OFFSET))(this, aid, device, game_key, guest_id, region, token, callback);
		}

		::System::Void RequestABTest(::System::String* storageyKey, ::System::String* accountId, ::System::Collections::Generic::List_1<::System::Int32>* sceneIdList, ::System::Int32 appId, ::System::String* appKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTABTEST_OFFSET))(this, storageyKey, accountId, sceneIdList, appId, appKey, callback);
		}

		::System::Void RequestPayDialogABTestCN(::System::String* accountId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPAYDIALOGABTESTCN_OFFSET))(this, accountId);
		}

		::System::Void RequestPriceTier(::System::String* currency, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIER_OFFSET))(this, currency, callback);
		}

		::System::Void GetCurrencyAndCountryByIP(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETCURRENCYANDCOUNTRYBYIP_OFFSET))(this, callback);
		}

		::System::Void RequestPriceTierV2(::System::String* country, ::System::String* currency, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIERV2_OFFSET))(this, country, currency, callback);
		}

		::System::Void RequestSendNoticeEmail(::MiHoYo::SDK::AccountModel* account, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTSENDNOTICEEMAIL_OFFSET))(this, account, callback, headers);
		}

		::System::Void RequestGetCrossTokenUrlBySToken(::MiHoYo::SDK::AccountModel* account, ::System::String* dest_url, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTGETCROSSTOKENURLBYSTOKEN_OFFSET))(this, account, dest_url, callback, headers);
		}

		::System::Void RequestAgeGateLoadTicket(::System::String* age_gate_payload, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATELOADTICKET_OFFSET))(this, age_gate_payload, callback, headers);
		}

		::System::Void RequestAgeGateUpdateTicket(::MiHoYo::SDK::AgeGateTicketUpdateModel* data, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AgeGateTicketUpdateModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEUPDATETICKET_OFFSET))(this, data, callback, headers);
		}

		::System::Void RequestAgeGateResendEmail(::System::String* ticket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATERESENDEMAIL_OFFSET))(this, ticket, callback, headers);
		}

		::System::Void RequestAgeGateParentalConsentEmail(::System::String* ticket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPARENTALCONSENTEMAIL_OFFSET))(this, ticket, callback, headers);
		}

		::System::Void RequestAgeGatePayPreOrderValidation(::MiHoYo::SDK::AccountModel* account, ::System::String* payPlat, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPAYPREORDERVALIDATION_OFFSET))(this, account, payPlat, callback, headers);
		}
	};
}
