#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_CANCELBINDING_OFFSET UNITYSDK_OFFSET(0x15E0ECE0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x15E0D9A0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_EXTRACTCONSOLEACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x15E0E950)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_EXTRACTFIRSTNONCONSOLETHIRDPARTYNAME_OFFSET UNITYSDK_OFFSET(0x15E0E5C0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15E0D680)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_GET_SDKREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x15E0DBA0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x15E0DF70)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SET_SDKREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x15E0DBB0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SHOWBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x15E0DBD0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x15E0DDE0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x15E0E200)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x15E0DBC0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x15E0E360)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x15E0E510)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0EEE0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_0_OFFSET UNITYSDK_OFFSET(0x15E0F1F0)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_1_OFFSET UNITYSDK_OFFSET(0x15E0F280)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_2_OFFSET UNITYSDK_OFFSET(0x15E0F300)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_3_OFFSET UNITYSDK_OFFSET(0x15E0F390)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDSUCCESSDIALOG_B__15_0_OFFSET UNITYSDK_OFFSET(0x15E0EF10)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x15E0F010)
#define MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET UNITYSDK_OFFSET(0x15E0F090)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int BindManagerBase_TypeDefinitionIndex = 7583;

	class BindManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::BindManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::BindManagerBase**)Il2CppClass::FromTypeDefinitionIndex(BindManagerBase_TypeDefinitionIndex)->GetStaticField(0x10450);
		}
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x10
		::System::Action* OnBindingCompleted; // 0x18
		::System::String* KibanaReportModule; // 0x20
		::System::String* Platform; // 0x28
		::System::Action* OnCancelBinding; // 0x30
		::System::Boolean forceTokenRefresh; // 0x38
		::MiHoYo::SDK::EnvType _envType; // 0x3C
		::MiHoYo::SDK::ReportType _reportType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::BindManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::BindManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::MiHoYo::SDK::ReportType get_SDKReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_GET_SDKREPORTTYPE_OFFSET))(this);
		}

		::System::Void set_SDKReportType(::MiHoYo::SDK::ReportType value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SET_SDKREPORTTYPE_OFFSET))(this, value);
		}

		::System::Void StartAccountBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_STARTACCOUNTBINDING_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* psAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SHOWBINDSUCCESSDIALOG_OFFSET))(this, psAccount, hoyoAccount);
		}

		::System::Void ShowReactivateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET))(this);
		}

		::System::Void ShowBindingDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_SHOWBINDINGDIALOG_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::String* ExtractFirstNonConsoleThirdpartyName(::MiHoYo::SDK::JSONNode* userInfo)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_EXTRACTFIRSTNONCONSOLETHIRDPARTYNAME_OFFSET))(this, userInfo);
		}

		::System::String* ExtractConsoleAccountName(::MiHoYo::SDK::JSONNode* userInfo)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_EXTRACTCONSOLEACCOUNTNAME_OFFSET))(this, userInfo);
		}

		::System::Void CancelBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_CANCELBINDING_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::Void _ShowBindSuccessDialog_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDSUCCESSDIALOG_B__15_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET))(this);
		}

		::System::Void _ShowBindingDialog_b__17_0(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_0_OFFSET))(this, input);
		}

		::System::Void _ShowBindingDialog_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_1_OFFSET))(this);
		}

		::System::Void _ShowBindingDialog_b__17_2(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_2_OFFSET))(this, captcha);
		}

		::System::Void _ShowBindingDialog_b__17_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_BINDMANAGERBASE__SHOWBINDINGDIALOG_B__17_3_OFFSET))(this);
		}
	};
}
