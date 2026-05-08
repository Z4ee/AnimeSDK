#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/BindManagerBase.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console { class UserGameServerInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x194A68F0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x194A6A80)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETUSERGAMESERVERLIST_OFFSET UNITYSDK_OFFSET(0x194A6C80)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x194A61A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x194A65D0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REPORTBINDFAIL_OFFSET UNITYSDK_OFFSET(0x194A6250)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x194A6510)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x194A7730)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x194A6640)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETSERVERBYREGIONCODE_OFFSET UNITYSDK_OFFSET(0x194A7DD0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x194A72D0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x194A74D0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTUSERSERVERLIST_OFFSET UNITYSDK_OFFSET(0x194A7A00)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x194A6F80)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_SHOWACCOUNTINFODIALOG_OFFSET UNITYSDK_OFFSET(0x194A6E30)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x194A63F0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x194A80F0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__QUERYWEBBINDINGRESULT_B__22_0_OFFSET UNITYSDK_OFFSET(0x194A85A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__SHOWACCOUNTINFODIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0x194A8C80)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__SHOWACCOUNTINFODIALOG_B__26_1_OFFSET UNITYSDK_OFFSET(0x194A8DB0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__UPDATEQRCODE_B__21_0_OFFSET UNITYSDK_OFFSET(0x194A81F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 19648;

	class BindManager : public ::MiHoYo::SDK::Console::BindManagerBase
	{
	public:
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		// static const ::System::Int32 CX_TOKEN_INVALID = 0xFFFFF31A; // 0x0
		// static const ::System::Int32 ACCOUNT_BOUND_TO_OTHER_CX = 0xFFFFF330; // 0x0
		// static const ::System::Int32 CX_BOUND_TO_OTHER_ACCOUNT = 0xFFFFF32F; // 0x0
		// static const ::System::String* ACTION_TYPE_LOGINBYEMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTHIRDPARTY; // 0x0
		::System::String* ReactivateTicket; // 0x48
		::MiHoYo::SDK::JSONObject* CaptchaVerifyCombination; // 0x50
		::System::String* WebTicket; // 0x58
		::System::String* UserEmail; // 0x60
		::System::String* SToken; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x70
		::System::String* ConsoleAccountName; // 0x78
		::System::String* LoginTicket; // 0x80
		::System::String* ConsoleAccountServer; // 0x88
		::System::String* UserId; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void ReportBindFail(::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REPORTBINDFAIL_OFFSET))(this, retcode);
		}

		::System::Void UpdateQRCode(::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_UPDATEQRCODE_OFFSET))(this, refreshToken);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void BindEmail(::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_BINDEMAIL_OFFSET))(this, refreshToken);
		}

		::System::Void GetCaptchaCode(::System::String* input, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, input, refreshToken);
		}

		::System::Void GetUserGameServerList(::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETUSERGAMESERVERLIST_OFFSET))(this, refreshToken);
		}

		::System::Void ShowAccountInfoDialog(::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* userGameInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_SHOWACCOUNTINFODIALOG_OFFSET))(this, userGameInfoList);
		}

		::System::Void RequestVerifyCaptcha(::System::String* captcha, ::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET))(this, captcha, actionTicket, callback);
		}

		::System::Void RequestActionTicket(::System::String* actionType, ::System::String* account, ::System::Boolean refreshToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTACTIONTICKET_OFFSET))(this, actionType, account, refreshToken, callback);
		}

		::System::Void RequestLoginByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestReactivateAccount(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestBindThirdparty(::System::String* actionTicket, ::System::String* stoken, ::System::String* uid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET))(this, actionTicket, stoken, uid, callback);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestUserServerList(::System::String* uid, ::System::String* stoken, ::System::String* gameKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTUSERSERVERLIST_OFFSET))(this, uid, stoken, gameKey, callback);
		}

		::System::Void RequestGetServerByRegionCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETSERVERBYREGIONCODE_OFFSET))(this, callback);
		}

		::System::Void _UpdateQRCode_b__21_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__UPDATEQRCODE_B__21_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_b__22_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__QUERYWEBBINDINGRESULT_B__22_0_OFFSET))(this, response);
		}

		::System::Void _ShowAccountInfoDialog_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__SHOWACCOUNTINFODIALOG_B__26_0_OFFSET))(this);
		}

		::System::Void _ShowAccountInfoDialog_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__SHOWACCOUNTINFODIALOG_B__26_1_OFFSET))(this);
		}
	};
}
