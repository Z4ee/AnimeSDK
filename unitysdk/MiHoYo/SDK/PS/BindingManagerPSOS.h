#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/BindManagerPS.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class UserGameServerInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x183A3550)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x183A2B10)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETUSERGAMESERVERLIST_OFFSET UNITYSDK_OFFSET(0x183A3340)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GET_APPID_OFFSET UNITYSDK_OFFSET(0x183A2020)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x183A20B0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x183A2D20)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x183A2880)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x183A30D0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x183A27C0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x183A4070)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x183A2920)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETSERVERBYREGIONCODE_OFFSET UNITYSDK_OFFSET(0x183A3B20)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x183A3980)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x183A3790)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x183A31A0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTUSERSERVERLIST_OFFSET UNITYSDK_OFFSET(0x183A3DB0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x183A2E80)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_SHOWACCOUNTINFODIALOG_OFFSET UNITYSDK_OFFSET(0x183A2310)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x183A2590)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__CTOR_OFFSET UNITYSDK_OFFSET(0x183A2170)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__GETCAPTCHACODE_B__23_0_OFFSET UNITYSDK_OFFSET(0x183A54A0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__QUERYWEBBINDINGRESULT_B__22_0_OFFSET UNITYSDK_OFFSET(0x183A4B00)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__REACTIVATEACCOUNT_B__25_0_OFFSET UNITYSDK_OFFSET(0x183A5A10)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_0_OFFSET UNITYSDK_OFFSET(0x183A4290)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_1_OFFSET UNITYSDK_OFFSET(0x183A43E0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__UPDATEQRCODE_B__21_0_OFFSET UNITYSDK_OFFSET(0x183A4460)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSOS_TypeDefinitionIndex = 8560;

	class BindingManagerPSOS : public ::MiHoYo::SDK::PS::BindManagerPS
	{
	public:
		// static const ::System::String* WEB_APP_ID_TEST; // 0x0
		// static const ::System::String* WEB_APP_ID; // 0x0
		// static const ::System::String* ACTION_TYPE_LOGINBYEMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTHIRDPARTY; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x30
		::System::String* ReactivateTicket; // 0x38
		::System::String* UserEmail; // 0x40
		::System::String* UserId; // 0x48
		::System::String* LoginTicket; // 0x50
		::MiHoYo::SDK::JSONObject* CaptchaVerifyCombination; // 0x58
		::System::String* PSNAccountName; // 0x60
		::System::String* PSNAccountServer; // 0x68
		::System::String* SToken; // 0x70
		::System::String* WebTicket; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__CTOR_OFFSET))(this);
		}

		static ::System::String* get_AppID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GET_APPID_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GET_RSAKEY_OFFSET))();
		}

		::System::Void ShowAccountInfoDialog(::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_SHOWACCOUNTINFODIALOG_OFFSET))(this, a1);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETCAPTCHACODE_OFFSET))(this, a1);
		}

		::System::Void PerformBindingFlow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_PERFORMBINDINGFLOW_OFFSET))(this, a1);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void GetUserGameServerList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETUSERGAMESERVERLIST_OFFSET))(this);
		}

		::System::Void BindEmail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_BINDEMAIL_OFFSET))(this);
		}

		::System::Void RequestActionTicket(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTACTIONTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETACTIONTICKETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void RequestMailCaptcha(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTMAILCAPTCHA_OFFSET))(this, a1, a2);
		}

		::System::Void RequestVerifyCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTVERIFYCAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestLoginByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void RequestReactivateAccount(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTREACTIVATEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void RequestGetServerByRegionCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETSERVERBYREGIONCODE_OFFSET))(this, a1);
		}

		::System::Void RequestUserServerList(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTUSERSERVERLIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestBindThirdparty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTBINDTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ShowAccountInfoDialog_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_0_OFFSET))(this);
		}

		::System::Void _ShowAccountInfoDialog_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_1_OFFSET))(this);
		}

		::System::Void _UpdateQRCode_b__21_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__UPDATEQRCODE_B__21_0_OFFSET))(this, a1);
		}

		::System::Void _QueryWebBindingResult_b__22_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__QUERYWEBBINDINGRESULT_B__22_0_OFFSET))(this, a1);
		}

		::System::Void _GetCaptchaCode_b__23_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__GETCAPTCHACODE_B__23_0_OFFSET))(this, a1);
		}

		::System::Void _ReactivateAccount_b__25_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__REACTIVATEACCOUNT_B__25_0_OFFSET))(this, a1);
		}
	};
}
