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

#define MIHOYO_SDK_REQUESTMANAGER_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x17115B60)
#define MIHOYO_SDK_REQUESTMANAGER_BINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x17116B30)
#define MIHOYO_SDK_REQUESTMANAGER_BINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x17115920)
#define MIHOYO_SDK_REQUESTMANAGER_GETCURRENCYANDCOUNTRYBYIP_OFFSET UNITYSDK_OFFSET(0x17117E30)
#define MIHOYO_SDK_REQUESTMANAGER_GETMAILVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x171128B0)
#define MIHOYO_SDK_REQUESTMANAGER_GETMOBILEVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x17114950)
#define MIHOYO_SDK_REQUESTMANAGER_GETTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x17112410)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_1_OFFSET UNITYSDK_OFFSET(0x17113E40)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x17113C20)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x171136E0)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYGUEST_OFFSET UNITYSDK_OFFSET(0x17114060)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYMOBILECODE_OFFSET UNITYSDK_OFFSET(0x17114B70)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_1_OFFSET UNITYSDK_OFFSET(0x17113430)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x17113180)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_1_OFFSET UNITYSDK_OFFSET(0x17114FE0)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_OFFSET UNITYSDK_OFFSET(0x17114DF0)
#define MIHOYO_SDK_REQUESTMANAGER_MOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x17112D10)
#define MIHOYO_SDK_REQUESTMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x17116000)
#define MIHOYO_SDK_REQUESTMANAGER_QUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x17115630)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTABTEST_OFFSET UNITYSDK_OFFSET(0x17116F00)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATELOADTICKET_OFFSET UNITYSDK_OFFSET(0x17118DD0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPARENTALCONSENTEMAIL_OFFSET UNITYSDK_OFFSET(0x171198B0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPAYPREORDERVALIDATION_OFFSET UNITYSDK_OFFSET(0x17119BD0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATERESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x17119590)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x171190F0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTBINDEMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x17112670)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTGETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x17118800)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPAYDIALOGABTESTCN_OFFSET UNITYSDK_OFFSET(0x17117610)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x17117F00)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x17117B90)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTQRCODE_OFFSET UNITYSDK_OFFSET(0x171153B0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTREDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x171167D0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTSENDNOTICEEMAIL_OFFSET UNITYSDK_OFFSET(0x17118400)
#define MIHOYO_SDK_REQUESTMANAGER_VERIFYMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x17112AD0)
#define MIHOYO_SDK_REQUESTMANAGER_VERIFYMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x17112F40)
#define MIHOYO_SDK_REQUESTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1711A0A0)
#define MIHOYO_SDK_REQUESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1711A090)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager_TypeDefinitionIndex = 8011;

	class RequestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RequestManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::RequestManager**)Il2CppClass::FromTypeDefinitionIndex(RequestManager_TypeDefinitionIndex)->GetStaticField(0xDC90);
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

		::System::Void GetTicketByToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETTICKETBYTOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestBindEmailByCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTBINDEMAILBYCODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetMailVerifyCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETMAILVERIFYCODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void VerifyMailCaptcha(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_VERIFYMAILCAPTCHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MobileCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_MOBILECAPTCHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void VerifyMobileCaptcha(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_VERIFYMOBILECAPTCHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LoginByThirdParty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoginByThirdParty_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoginByAuthTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYAUTHTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByAccount(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByAccount_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByGuest(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYGUEST_OFFSET))(this, a1);
		}

		::System::Void GetMobileVerifyCode(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETMOBILEVERIFYCODE_OFFSET))(this, a1, a2);
		}

		::System::Void LoginByMobileCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYMOBILECODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LoginByToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByToken_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestQRCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTQRCODE_OFFSET))(this, a1);
		}

		::System::Void QueryQRCode(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_QUERYQRCODE_OFFSET))(this, a1, a2);
		}

		::System::Void BindThirdParty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BINDTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BeforeVerify(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BEFOREVERIFY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Ping(::System::String* a1, ::System::String* a2, ::System::Int64 a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_PING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestRedPointInfo(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTREDPOINTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void BindAccount(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BINDACCOUNT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void RequestABTest(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTABTEST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RequestPayDialogABTestCN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPAYDIALOGABTESTCN_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTier(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetCurrencyAndCountryByIP(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETCURRENCYANDCOUNTRYBYIP_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTierV2(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIERV2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestSendNoticeEmail(::MiHoYo::SDK::AccountModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTSENDNOTICEEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestGetCrossTokenUrlBySToken(::MiHoYo::SDK::AccountModel* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTGETCROSSTOKENURLBYSTOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestAgeGateLoadTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATELOADTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGateUpdateTicket(::MiHoYo::SDK::AgeGateTicketUpdateModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AgeGateTicketUpdateModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEUPDATETICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGateResendEmail(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATERESENDEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGateParentalConsentEmail(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPARENTALCONSENTEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGatePayPreOrderValidation(::MiHoYo::SDK::AccountModel* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPAYPREORDERVALIDATION_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
