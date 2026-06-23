#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04.h"
#include "unitysdk/MoleMole/RealtimeQTETaskUIPositionType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_D47998EF092D4845;
class Class_2_5E2FBACADDB625B7;
class Class_2_D244C6518E0DA169;
namespace MoleMole { class RealtimeQTESubSystem; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRealtimeQTEButtonBaseController; }
namespace MoleMole { class UIRealtimeQTEProgressBarChildWindowController; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_DOCHECKCLOSESTATE_OFFSET UNITYSDK_OFFSET(0x15617EB0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GETREALTIMEQTEWIDGETROOT_OFFSET UNITYSDK_OFFSET(0x15618640)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISENABLEFADEINPUTBLOCKING_OFFSET UNITYSDK_OFFSET(0x15617870)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x15617890)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x15617880)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15617860)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15617AA0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15617E30)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15617D20)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEDESTROY_OFFSET UNITYSDK_OFFSET(0x156183D0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEEND_OFFSET UNITYSDK_OFFSET(0x15617F10)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15617DB0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156178F0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15617940)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCLOSEREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0x15617FE0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCREATEBUTTONQTE_OFFSET UNITYSDK_OFFSET(0x156184A0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156186F0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_0_OFFSET UNITYSDK_OFFSET(0x15618700)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_1_OFFSET UNITYSDK_OFFSET(0x15618710)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x15618720)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15618730)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156187C0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156187D0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156187E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRealtimeQTEPopWindowController_TypeDefinitionIndex = 39926;

	class UIRealtimeQTEPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_5E2FBACADDB625B7* _view; // 0x318
		::System::String* _taskCustomTag; // 0x320
		::Class_1_D47998EF092D4845* _task; // 0x328
		::MoleMole::Config::RealtimeQTETaskEntryBase* _taskEntryBase; // 0x330
		::MoleMole::RealtimeQTESubSystem* _realtimeQTESubSystem; // 0x338
		::System::Boolean _ignoreInput; // 0x340
		::System::Boolean _ignoreInputByQTE; // 0x341
		::System::Boolean _isInCloseState; // 0x342
		::MoleMole::UIRealtimeQTEProgressBarChildWindowController* _progressBarController; // 0x348
		::MoleMole::UIRealtimeQTEButtonBaseController* _buttonController; // 0x350
		::System::Int32 _closeCounter; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsEnableFadeInputBlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISENABLEFADEINPUTBLOCKING_OFFSET))(this);
		}

		::Enum_3_0277FE49450CA4D5 get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnRealtimeQTEEnd(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEEND_OFFSET))(this, args);
		}

		::System::Void OnRealtimeQTEDestroy(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEDESTROY_OFFSET))(this, args);
		}

		::System::Void TryCloseRealtimeQTE(::Enum_3_D2BBBB758B896E04 finishType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D2BBBB758B896E04))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCLOSEREALTIMEQTE_OFFSET))(this, finishType);
		}

		::System::Void DoCheckCloseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_DOCHECKCLOSESTATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void TryCreateButtonQTE(::Class_2_D244C6518E0DA169* buttonQTETaskBase)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCREATEBUTTONQTE_OFFSET))(this, buttonQTETaskBase);
		}

		::UnityEngine::RectTransform* GetRealtimeQTEWidgetRoot(::MoleMole::RealtimeQTETaskUIPositionType taskUIPositionType)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::RealtimeQTETaskUIPositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GETREALTIMEQTEWIDGETROOT_OFFSET))(this, taskUIPositionType);
		}

		::System::Void _TryCloseRealtimeQTE_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_0_OFFSET))(this);
		}

		::System::Void _TryCloseRealtimeQTE_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_1_OFFSET))(this);
		}

		::System::Boolean __base_get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
