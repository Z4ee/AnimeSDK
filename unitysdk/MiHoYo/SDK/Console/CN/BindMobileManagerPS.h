#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_CLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97A2B0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_CREATEACTIONTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1A97AF20)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1A97B440)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1A97AA80)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GETSHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x1A97A4E0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A979AC0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_ISREACHEDINTERVALDAYS_OFFSET UNITYSDK_OFFSET(0x1A97A610)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_LOADSHOWDATE_OFFSET UNITYSDK_OFFSET(0x1A97A980)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1A979CB0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1A97B3D0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_SAVESHOWDATE_OFFSET UNITYSDK_OFFSET(0x1A97A130)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_SHOWBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1A979F20)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97B6F0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1A97ADC0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1A97A430)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1A97A240)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A979B40)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__QUERYWEBBINDINGRESULT_B__29_0_OFFSET UNITYSDK_OFFSET(0x1A97BCD0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDINGDIALOG_B__19_0_OFFSET UNITYSDK_OFFSET(0x1A97B880)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDINGDIALOG_B__19_1_OFFSET UNITYSDK_OFFSET(0x1A97B8F0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDINGDIALOG_B__19_2_OFFSET UNITYSDK_OFFSET(0x1A97B9B0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDSUCCESSDIALOG_B__30_0_OFFSET UNITYSDK_OFFSET(0x1A97C270)
#define MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__UPDATEQRCODE_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A97B9E0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindMobileManagerPS_TypeDefinitionIndex = 20851;

	class BindMobileManagerPS : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::CN::BindMobileManagerPS** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::CN::BindMobileManagerPS**)Il2CppClass::FromTypeDefinitionIndex(BindMobileManagerPS_TypeDefinitionIndex)->GetStaticField(0x9810);
		}
		// static const ::System::String* ACTION_TYPE_BINDTICKET; // 0x0
		// static const ::System::String* VERIFY_STATUS_VERIFIED; // 0x0
		// static const ::System::String* SHOW_DATE_CACHE_KEY; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::System::String* WebTicket; // 0x10
		::System::Action* OnBindingCompleted; // 0x18
		::System::String* AccountMid; // 0x20
		::System::Action* OnCancelBinding; // 0x28
		::System::String* AccountToken; // 0x30
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x38
		::System::String* Platform; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x48
		::System::Int32 TokenType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::CN::BindMobileManagerPS* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::CN::BindMobileManagerPS*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GET_INSTANCE_OFFSET))();
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Void ShowBindingDialog(::System::String* mid, ::System::String* token, ::System::Int32 type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_SHOWBINDINGDIALOG_OFFSET))(this, mid, token, type, name);
		}

		::System::Void CloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_CLOSEDIALOG_OFFSET))(this);
		}

		::System::String* GetShowDateCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GETSHOWDATECACHEKEY_OFFSET))(this);
		}

		::System::Boolean IsReachedIntervalDays()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_ISREACHEDINTERVALDAYS_OFFSET))(this);
		}

		::System::DateTime LoadShowDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_LOADSHOWDATE_OFFSET))(this);
		}

		::System::Void SaveShowDate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_SAVESHOWDATE_OFFSET))(this);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* psAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_SHOWBINDSUCCESSDIALOG_OFFSET))(this, psAccount, hoyoAccount);
		}

		::System::Void CreateActionTicketByToken(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_CREATEACTIONTICKETBYTOKEN_OFFSET))(this, callback);
		}

		::System::Void GetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS_GETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void _ShowBindingDialog_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDINGDIALOG_B__19_0_OFFSET))(this);
		}

		::System::Void _ShowBindingDialog_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDINGDIALOG_B__19_1_OFFSET))(this);
		}

		::System::Void _ShowBindingDialog_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDINGDIALOG_B__19_2_OFFSET))(this);
		}

		::System::Void _UpdateQRCode_b__28_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__UPDATEQRCODE_B__28_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_b__29_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__QUERYWEBBINDINGRESULT_B__29_0_OFFSET))(this, response);
		}

		::System::Void _ShowBindSuccessDialog_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMOBILEMANAGERPS__SHOWBINDSUCCESSDIALOG_B__30_0_OFFSET))(this);
		}
	};
}
