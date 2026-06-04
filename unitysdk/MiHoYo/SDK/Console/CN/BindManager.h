#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/BindManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x182118F0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x18211820)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x18211F00)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x18210BF0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x18211C90)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x18210D40)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x18210F40)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x182111A0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x18210CA0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x18211680)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x182114F0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x18210AE0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x18211300)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__BINDMOBILE_B__14_0_OFFSET UNITYSDK_OFFSET(0x18213440)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18212100)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__QUERYWEBBINDINGRESULT_B__10_0_OFFSET UNITYSDK_OFFSET(0x182127A0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__REACTIVATEACCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x18213170)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__UPDATEQRCODE_B__9_0_OFFSET UNITYSDK_OFFSET(0x182121A0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 8765;

	class BindManager : public ::MiHoYo::SDK::Console::BindManagerBase
	{
	public:
		// static const ::System::String* ACTION_TYPE_BINDTICKET; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		::System::String* ReactivateTicket; // 0x48
		::System::String* BindTicket; // 0x50
		::System::String* WebTicket; // 0x58
		::System::String* UserMobile; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateQRCode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_UPDATEQRCODE_OFFSET))(this, a1);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, a1, a2);
		}

		::System::Void PerformBindingFlow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET))(this, a1);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void BindMobile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILE_OFFSET))(this);
		}

		::System::Void CreateThirdpartyBindMobileActionTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET))(this, a1);
		}

		::System::Void GetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_GETACTIONTICKETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void CreateThirdpartyBindMobileCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void VerifyThirdpartyBindMobileCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckReactivateInfoByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void BindMobileByThirdpartyBindMobileTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateQRCode_b__9_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__UPDATEQRCODE_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _QueryWebBindingResult_b__10_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__QUERYWEBBINDINGRESULT_B__10_0_OFFSET))(this, a1);
		}

		::System::Void _ReactivateAccount_b__13_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__REACTIVATEACCOUNT_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _BindMobile_b__14_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER__BINDMOBILE_B__14_0_OFFSET))(this, a1);
		}
	};
}
