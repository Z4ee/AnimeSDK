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

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_CANCELBINDING_OFFSET UNITYSDK_OFFSET(0x1D1BE9C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1D1BD0D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_EXTRACTCONSOLEACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x1D1BE650)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_EXTRACTFIRSTNONCONSOLETHIRDPARTYNAME_OFFSET UNITYSDK_OFFSET(0x1D1BE2E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D1BCF70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_GET_SDKREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1D1BD160)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1D1BD2B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SET_SDKREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1D1BD170)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1BD190)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1BD1A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWEMAILBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1BD940)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWQRBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1BD640)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1BD4E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1D1BD180)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1D1BE0D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1D1BDE70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BED40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWBINDSUCCESSDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1D1BED90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_2_OFFSET UNITYSDK_OFFSET(0x1D1BF040)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_3_OFFSET UNITYSDK_OFFSET(0x1D1BF0E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_4_OFFSET UNITYSDK_OFFSET(0x1D1BF190)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWEMAILBINDINGDIALOG_B__19_5_OFFSET UNITYSDK_OFFSET(0x1D1BF240)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWQRBINDINGDIALOG_B__20_0_OFFSET UNITYSDK_OFFSET(0x1D1BF2E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWQRBINDINGDIALOG_B__20_1_OFFSET UNITYSDK_OFFSET(0x1D1BF420)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D1BEE40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE__SHOWREACTIVATEDIALOG_B__17_1_OFFSET UNITYSDK_OFFSET(0x1D1BEEE0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerBase_TypeDefinitionIndex = 20826;

	class BindManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase**)Il2CppClass::FromTypeDefinitionIndex(BindManagerBase_TypeDefinitionIndex)->GetStaticField(0x90B0);
		}
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::System::Action* OnCancelBinding; // 0x10
		::UnityEngine::MonoBehaviour* WebBindResultQueryOwner; // 0x18
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x20
		::System::String* KibanaReportModule; // 0x28
		::System::String* Platform; // 0x30
		::System::Action* OnBindingCompleted; // 0x38
		::MiHoYo::SDK::ReportType _reportType; // 0x40
		::System::Boolean forceTokenRefresh; // 0x44
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
