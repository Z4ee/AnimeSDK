#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/BindManagerBase.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A667BF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1A665A80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1A6681A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1A668330)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REPORTBINDFAIL_OFFSET UNITYSDK_OFFSET(0x1A667D30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1A668250)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1A6685F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1A6683D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1A668000)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A666E40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1A666880)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1A6643E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6664D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__QUERYWEBBINDINGRESULT_B__17_0_OFFSET UNITYSDK_OFFSET(0x1A668B20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__UPDATEQRCODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A668810)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerHandheld_TypeDefinitionIndex = 8677;

	class BindManagerHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase
	{
	public:
		// static const ::System::String* ACTION_TYPE_LOGINBYEMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTHIRDPARTY; // 0x0
		::System::String* ConsoleAccountName; // 0x50
		::System::String* ReactivateTicket; // 0x58
		::System::String* UserId; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x68
		::MiHoYo::SDK::JSONObject* CaptchaVerifyCombination; // 0x70
		::System::String* WebTicket; // 0x78
		::System::String* UserEmail; // 0x80
		::System::String* LoginTicket; // 0x88
		::System::String* SToken; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__CTOR_OFFSET))(this);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GET_RSAKEY_OFFSET))();
		}

		::System::Void ReportBindFail(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REPORTBINDFAIL_OFFSET))(this, a1);
		}

		::System::Void UpdateQRCode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_UPDATEQRCODE_OFFSET))(this, a1);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void BindEmail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_BINDEMAIL_OFFSET))(this, a1);
		}

		::System::Void GetCaptchaCode(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GETCAPTCHACODE_OFFSET))(this, a1, a2);
		}

		::System::Void RequestVerifyCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTVERIFYCAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestActionTicket(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTACTIONTICKET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestLoginByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void RequestReactivateAccount(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTREACTIVATEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void RequestBindThirdparty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTBINDTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTGETACTIONTICKETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateQRCode_b__16_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__UPDATEQRCODE_B__16_0_OFFSET))(this, a1);
		}

		::System::Void _QueryWebBindingResult_b__17_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__QUERYWEBBINDINGRESULT_B__17_0_OFFSET))(this, a1);
		}
	};
}
