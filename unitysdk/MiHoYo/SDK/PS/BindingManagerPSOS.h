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

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A515B80)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1A515150)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETUSERGAMESERVERLIST_OFFSET UNITYSDK_OFFSET(0x1A5159E0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GET_APPID_OFFSET UNITYSDK_OFFSET(0x1A514810)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1A5148A0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1A515300)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1A514E30)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A515760)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1A514D80)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1A5168A0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1A514EA0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETSERVERBYREGIONCODE_OFFSET UNITYSDK_OFFSET(0x1A5161B0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1A515FB0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1A515D00)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5157E0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTUSERSERVERLIST_OFFSET UNITYSDK_OFFSET(0x1A5164D0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1A515410)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_SHOWACCOUNTINFODIALOG_OFFSET UNITYSDK_OFFSET(0x1A514B20)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1A514C70)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A514960)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__GETCAPTCHACODE_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A517B30)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__QUERYWEBBINDINGRESULT_B__22_0_OFFSET UNITYSDK_OFFSET(0x1A517470)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__REACTIVATEACCOUNT_B__25_0_OFFSET UNITYSDK_OFFSET(0x1A518040)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_0_OFFSET UNITYSDK_OFFSET(0x1A516B70)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_1_OFFSET UNITYSDK_OFFSET(0x1A516CA0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS__UPDATEQRCODE_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A516D40)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSOS_TypeDefinitionIndex = 19484;

	class BindingManagerPSOS : public ::MiHoYo::SDK::PS::BindManagerPS
	{
	public:
		// static const ::System::String* WEB_APP_ID_TEST; // 0x0
		// static const ::System::String* WEB_APP_ID; // 0x0
		// static const ::System::String* ACTION_TYPE_LOGINBYEMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTHIRDPARTY; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		::System::String* LoginTicket; // 0x30
		::System::String* PSNAccountName; // 0x38
		::System::String* UserEmail; // 0x40
		::System::String* ReactivateTicket; // 0x48
		::MiHoYo::SDK::JSONObject* CaptchaVerifyCombination; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x58
		::System::String* UserId; // 0x60
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

		::System::Void ShowAccountInfoDialog(::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* userGameInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_SHOWACCOUNTINFODIALOG_OFFSET))(this, userGameInfoList);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_GETCAPTCHACODE_OFFSET))(this, input);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
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

		::System::Void RequestActionTicket(::System::String* actionType, ::System::String* account, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTACTIONTICKET_OFFSET))(this, actionType, account, callback);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestMailCaptcha(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTMAILCAPTCHA_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestVerifyCaptcha(::System::String* captcha, ::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTVERIFYCAPTCHA_OFFSET))(this, captcha, actionTicket, callback);
		}

		::System::Void RequestLoginByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestReactivateAccount(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTREACTIVATEACCOUNT_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestGetServerByRegionCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTGETSERVERBYREGIONCODE_OFFSET))(this, callback);
		}

		::System::Void RequestUserServerList(::System::String* uid, ::System::String* stoken, ::System::String* gameKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTUSERSERVERLIST_OFFSET))(this, uid, stoken, gameKey, callback);
		}

		::System::Void RequestBindThirdparty(::System::String* actionTicket, ::System::String* stoken, ::System::String* uid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS_REQUESTBINDTHIRDPARTY_OFFSET))(this, actionTicket, stoken, uid, callback);
		}

		::System::Void _ShowAccountInfoDialog_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_0_OFFSET))(this);
		}

		::System::Void _ShowAccountInfoDialog_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__SHOWACCOUNTINFODIALOG_B__20_1_OFFSET))(this);
		}

		::System::Void _UpdateQRCode_b__21_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__UPDATEQRCODE_B__21_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_b__22_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__QUERYWEBBINDINGRESULT_B__22_0_OFFSET))(this, response);
		}

		::System::Void _GetCaptchaCode_b__23_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__GETCAPTCHACODE_B__23_0_OFFSET))(this, response);
		}

		::System::Void _ReactivateAccount_b__25_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS__REACTIVATEACCOUNT_B__25_0_OFFSET))(this, response);
		}
	};
}
