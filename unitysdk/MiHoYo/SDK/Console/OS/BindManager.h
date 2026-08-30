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

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x17361D90)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x17361EF0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETUSERGAMESERVERLIST_OFFSET UNITYSDK_OFFSET(0x173620A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x173616C0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x17361B00)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REPORTBINDFAIL_OFFSET UNITYSDK_OFFSET(0x17361770)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x173619C0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x173629A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x17361BA0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETSERVERBYREGIONCODE_OFFSET UNITYSDK_OFFSET(0x17362E80)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x17362600)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x173627A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTUSERSERVERLIST_OFFSET UNITYSDK_OFFSET(0x17362BC0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x173623A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_SHOWACCOUNTINFODIALOG_OFFSET UNITYSDK_OFFSET(0x17362230)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x173618A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17363100)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__QUERYWEBBINDINGRESULT_B__22_0_OFFSET UNITYSDK_OFFSET(0x173635C0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__SHOWACCOUNTINFODIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0x17364120)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__SHOWACCOUNTINFODIALOG_B__26_1_OFFSET UNITYSDK_OFFSET(0x17364200)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__UPDATEQRCODE_B__21_0_OFFSET UNITYSDK_OFFSET(0x173631C0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 9004;

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
		::System::String* LoginTicket; // 0x50
		::System::String* WebTicket; // 0x58
		::System::String* ConsoleAccountServer; // 0x60
		::System::String* UserEmail; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x70
		::MiHoYo::SDK::JSONObject* CaptchaVerifyCombination; // 0x78
		::System::String* SToken; // 0x80
		::System::String* UserId; // 0x88
		::System::String* ConsoleAccountName; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void ReportBindFail(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REPORTBINDFAIL_OFFSET))(this, a1);
		}

		::System::Void UpdateQRCode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_UPDATEQRCODE_OFFSET))(this, a1);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void BindEmail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_BINDEMAIL_OFFSET))(this, a1);
		}

		::System::Void GetCaptchaCode(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, a1, a2);
		}

		::System::Void GetUserGameServerList(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_GETUSERGAMESERVERLIST_OFFSET))(this, a1);
		}

		::System::Void ShowAccountInfoDialog(::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_SHOWACCOUNTINFODIALOG_OFFSET))(this, a1);
		}

		::System::Void RequestVerifyCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestActionTicket(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTACTIONTICKET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestLoginByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void RequestReactivateAccount(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void RequestBindThirdparty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void RequestUserServerList(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTUSERSERVERLIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestGetServerByRegionCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER_REQUESTGETSERVERBYREGIONCODE_OFFSET))(this, a1);
		}

		::System::Void _UpdateQRCode_b__21_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__UPDATEQRCODE_B__21_0_OFFSET))(this, a1);
		}

		::System::Void _QueryWebBindingResult_b__22_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER__QUERYWEBBINDINGRESULT_B__22_0_OFFSET))(this, a1);
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
