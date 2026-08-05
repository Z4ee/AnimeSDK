#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/BindManagerPS.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x1BDDD6E0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1BDDD660)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BDDDC40)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BDDCAB0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1BDDD8D0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1BDDCBB0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1BDDCE50)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1BDDD050)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1BDDCB40)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BDDD470)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDDD3F0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1BDDC9C0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1BDDD160)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__BINDMOBILE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1BDDECF0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDDEE0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__QUERYWEBBINDINGRESULT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BDDE4B0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__REACTIVATEACCOUNT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1BDDEB70)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__UPDATEQRCODE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BDDDEF0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSCN_TypeDefinitionIndex = 20988;

	class BindingManagerPSCN : public ::MiHoYo::SDK::PS::BindManagerPS
	{
	public:
		// static const ::System::String* WEB_APP_ID_TEST; // 0x0
		// static const ::System::String* WEB_APP_ID; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTICKET; // 0x0
		::System::String* WebTicket; // 0x30
		::System::String* ReactivateTicket; // 0x38
		::System::String* BindTicket; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__CTOR_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETCAPTCHACODE_OFFSET))(this, input);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void BindMobile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILE_OFFSET))(this);
		}

		::System::Void CreateThirdpartyBindMobileActionTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET))(this, callback);
		}

		::System::Void GetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void CreateThirdpartyBindMobileCaptcha(::System::String* actionTicket, ::System::String* phoneNumber, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, actionTicket, phoneNumber, callback);
		}

		::System::Void VerifyThirdpartyBindMobileCaptcha(::System::String* actionTicket, ::System::String* captcha, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, actionTicket, captcha, callback);
		}

		::System::Void CheckReactivateInfoByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void BindMobileByThirdpartyBindMobileTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void _UpdateQRCode_b__7_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__UPDATEQRCODE_B__7_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_b__8_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__QUERYWEBBINDINGRESULT_B__8_0_OFFSET))(this, response);
		}

		::System::Void _ReactivateAccount_b__11_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__REACTIVATEACCOUNT_B__11_0_OFFSET))(this, response);
		}

		::System::Void _BindMobile_b__12_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__BINDMOBILE_B__12_0_OFFSET))(this, response);
		}
	};
}
