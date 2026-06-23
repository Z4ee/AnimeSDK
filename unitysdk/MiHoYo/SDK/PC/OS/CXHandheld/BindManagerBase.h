#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class MonoBehaviour; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_CANCELBINDING_OFFSET UNITYSDK_OFFSET(0x1BE4D360)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1BE4BA80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_EXTRACTCONSOLEACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x1BE4D000)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_EXTRACTFIRSTNONCONSOLETHIRDPARTYNAME_OFFSET UNITYSDK_OFFSET(0x1BE4CCA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BE4B920)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_GET_SDKREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE4BB10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1BE4BC60)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SET_SDKREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE4BB20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE4BB40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE4BB50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWEMAILBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE4C2F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWQRBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE4BFF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE4BE90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1BE4BB30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1BE4CA80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1BE4C820)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4D6E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWBINDSUCCESSDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BE4D730)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_2_OFFSET UNITYSDK_OFFSET(0x1BE4D9E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_3_OFFSET UNITYSDK_OFFSET(0x1BE4DA80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_4_OFFSET UNITYSDK_OFFSET(0x1BE4DB30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_5_OFFSET UNITYSDK_OFFSET(0x1BE4DBE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWQRBINDINGDIALOG_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BE4DC80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWQRBINDINGDIALOG_B__20_1_OFFSET UNITYSDK_OFFSET(0x1BE4DDC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__17_0_OFFSET UNITYSDK_OFFSET(0x1BE4D7E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__17_1_OFFSET UNITYSDK_OFFSET(0x1BE4D880)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerBase_TypeDefinitionIndex = 20479;

	class BindManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase**)Il2CppClass::FromTypeDefinitionIndex(BindManagerBase_TypeDefinitionIndex)->GetStaticField(0x9070);
		}
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::System::Action* OnCancelBinding; // 0x10
		::System::Action* OnBindingCompleted; // 0x18
		::System::String* Platform; // 0x20
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x28
		::UnityEngine::MonoBehaviour* WebBindResultQueryOwner; // 0x30
		::System::String* KibanaReportModule; // 0x38
		::System::Boolean forceTokenRefresh; // 0x40
		::MiHoYo::SDK::ReportType _reportType; // 0x44
		::MiHoYo::SDK::EnvType _envType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::MiHoYo::SDK::ReportType get_SDKReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_GET_SDKREPORTTYPE_OFFSET))(this);
		}

		::System::Void set_SDKReportType(::MiHoYo::SDK::ReportType value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SET_SDKREPORTTYPE_OFFSET))(this, value);
		}

		::System::Void StartAccountBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STARTACCOUNTBINDING_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* psAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWBINDSUCCESSDIALOG_OFFSET))(this, psAccount, hoyoAccount);
		}

		::System::Void ShowReactivateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET))(this);
		}

		::System::Void ShowBindingDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWBINDINGDIALOG_OFFSET))(this);
		}

		::System::Void ShowEmailBindingDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWEMAILBINDINGDIALOG_OFFSET))(this);
		}

		::System::Void ShowQRBindingDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWQRBINDINGDIALOG_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::String* ExtractFirstNonConsoleThirdpartyName(::MiHoYo::SDK::JSONNode* userInfo)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_EXTRACTFIRSTNONCONSOLETHIRDPARTYNAME_OFFSET))(this, userInfo);
		}

		::System::String* ExtractConsoleAccountName(::MiHoYo::SDK::JSONNode* userInfo)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_EXTRACTCONSOLEACCOUNTNAME_OFFSET))(this, userInfo);
		}

		::System::Void CancelBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_CANCELBINDING_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::Void _ShowBindSuccessDialog_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWBINDSUCCESSDIALOG_B__16_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__17_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__17_1_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_2_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__19_3(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_3_OFFSET))(this, input);
		}

		::System::Void _ShowEmailBindingDialog_b__19_4(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_4_OFFSET))(this, captcha);
		}

		::System::Void _ShowEmailBindingDialog_b__19_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_5_OFFSET))(this);
		}

		::System::Void _ShowQRBindingDialog_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWQRBINDINGDIALOG_B__20_0_OFFSET))(this);
		}

		::System::Void _ShowQRBindingDialog_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWQRBINDINGDIALOG_B__20_1_OFFSET))(this);
		}
	};
}
