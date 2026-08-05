#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/BindManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x1CE98C40)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1CE98BC0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1CE99460)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1CE97FB0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1CE98F90)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1CE980C0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1CE98370)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1CE98570)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1CE98050)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1CE989C0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE98920)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1CE97F30)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1CE98680)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__BINDMOBILE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1CE9A4D0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE99710)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__QUERYWEBBINDINGRESULT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CE99C10)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__REACTIVATEACCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CE9A2F0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__UPDATEQRCODE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CE997E0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 21199;

	class BindManager : public ::MiHoYo::SDK::Console::BindManagerBase
	{
	public:
		// static const ::System::String* ACTION_TYPE_BINDTICKET; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		::System::String* ReactivateTicket; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x50
		::System::String* WebTicket; // 0x58
		::System::String* UserMobile; // 0x60
		::System::String* BindTicket; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateQRCode(::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_UPDATEQRCODE_OFFSET))(this, refreshToken);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* input, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, input, refreshToken);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void BindMobile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILE_OFFSET))(this);
		}

		::System::Void CreateThirdpartyBindMobileActionTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET))(this, callback);
		}

		::System::Void GetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void CreateThirdpartyBindMobileCaptcha(::System::String* actionTicket, ::System::String* phoneNumber, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, actionTicket, phoneNumber, callback);
		}

		::System::Void VerifyThirdpartyBindMobileCaptcha(::System::String* actionTicket, ::System::String* captcha, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, actionTicket, captcha, callback);
		}

		::System::Void CheckReactivateInfoByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void BindMobileByThirdpartyBindMobileTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void _UpdateQRCode_b__9_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__UPDATEQRCODE_B__9_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_b__10_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__QUERYWEBBINDINGRESULT_B__10_0_OFFSET))(this, response);
		}

		::System::Void _ReactivateAccount_b__13_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__REACTIVATEACCOUNT_B__13_0_OFFSET))(this, response);
		}

		::System::Void _BindMobile_b__14_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__BINDMOBILE_B__14_0_OFFSET))(this, response);
		}
	};
}
