#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_PS_BINDMANAGERPS_CANCELBINDING_OFFSET UNITYSDK_OFFSET(0x1BA396B0)
#define MIHOYO_SDK_PS_BINDMANAGERPS_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1BA39180)
#define MIHOYO_SDK_PS_BINDMANAGERPS_EXTRACTFIRSTNONPSTHIRDPARTYNAME_OFFSET UNITYSDK_OFFSET(0x1BA3A780)
#define MIHOYO_SDK_PS_BINDMANAGERPS_EXTRACTSNOYACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x1BA3AC10)
#define MIHOYO_SDK_PS_BINDMANAGERPS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA38F70)
#define MIHOYO_SDK_PS_BINDMANAGERPS_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1BA3A070)
#define MIHOYO_SDK_PS_BINDMANAGERPS_SHOWBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA393A0)
#define MIHOYO_SDK_PS_BINDMANAGERPS_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA39E20)
#define MIHOYO_SDK_PS_BINDMANAGERPS_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA3A4A0)
#define MIHOYO_SDK_PS_BINDMANAGERPS_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1BA39390)
#define MIHOYO_SDK_PS_BINDMANAGERPS_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1BA39A30)
#define MIHOYO_SDK_PS_BINDMANAGERPS_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1BA398E0)
#define MIHOYO_SDK_PS_BINDMANAGERPS_UPDATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BA3B080)
#define MIHOYO_SDK_PS_BINDMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3B1C0)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_0_OFFSET UNITYSDK_OFFSET(0x1BA3B1D0)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_1_OFFSET UNITYSDK_OFFSET(0x1BA3B2C0)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_2_OFFSET UNITYSDK_OFFSET(0x1BA3B3A0)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_3_OFFSET UNITYSDK_OFFSET(0x1BA3B490)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDSUCCESSDIALOG_B__19_0_OFFSET UNITYSDK_OFFSET(0x1BA3B510)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWREACTIVATEDIALOG_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BA3B690)
#define MIHOYO_SDK_PS_BINDMANAGERPS__SHOWREACTIVATEDIALOG_B__20_1_OFFSET UNITYSDK_OFFSET(0x1BA3B770)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindManagerPS_TypeDefinitionIndex = 8833;

	class BindManagerPS : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::BindManagerPS** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PS::BindManagerPS**)Il2CppClass::FromTypeDefinitionIndex(BindManagerPS_TypeDefinitionIndex)->GetStaticField(0x21C00);
		}
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::System::Action* OnBindingCompleted; // 0x10
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x18
		::System::Action* OnCancelBinding; // 0x20
		::MiHoYo::SDK::EnvType _envType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PS::BindManagerPS* get_Instance()
		{
			return ((::MiHoYo::SDK::PS::BindManagerPS*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_GET_INSTANCE_OFFSET))();
		}

		::System::Void StartAccountBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_STARTACCOUNTBINDING_OFFSET))(this);
		}

		::System::Void CancelBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_CANCELBINDING_OFFSET))(this);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_ENVCHANGED_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void ShowBindingDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_SHOWBINDINGDIALOG_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_SHOWBINDSUCCESSDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void ShowReactivateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_SHOWREACTIVATEDIALOG_OFFSET))(this);
		}

		::System::String* ExtractFirstNonPSThirdpartyName(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_EXTRACTFIRSTNONPSTHIRDPARTYNAME_OFFSET))(this, a1);
		}

		::System::String* ExtractSnoyAccountName(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_EXTRACTSNOYACCOUNTNAME_OFFSET))(this, a1);
		}

		::System::Void UpdateAccessToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_UPDATEACCESSTOKEN_OFFSET))(this, a1);
		}

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS_LOGREPORT_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindingDialog_b__18_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_0_OFFSET))(this, a1);
		}

		::System::Void _ShowBindingDialog_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_1_OFFSET))(this);
		}

		::System::Void _ShowBindingDialog_b__18_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_2_OFFSET))(this, a1);
		}

		::System::Void _ShowBindingDialog_b__18_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDINGDIALOG_B__18_3_OFFSET))(this);
		}

		::System::Void _ShowBindSuccessDialog_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWBINDSUCCESSDIALOG_B__19_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWREACTIVATEDIALOG_B__20_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS__SHOWREACTIVATEDIALOG_B__20_1_OFFSET))(this);
		}
	};
}
