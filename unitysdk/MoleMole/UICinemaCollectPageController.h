#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_9CF9955F8B7A43EF;
class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_699998D4E6F32559;
class Class_2_E68D97581F2F1CC1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICinemaCollectPageContext; }
namespace MoleMole { class UICinemaCollectProPointWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_CLEARCOLLECTSTATE_OFFSET UNITYSDK_OFFSET(0x1647B640)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_FINDFIRSTSELECT_OFFSET UNITYSDK_OFFSET(0x1647B1E0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_GENCOLLECTREWARDLIST_OFFSET UNITYSDK_OFFSET(0x164790D0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1647AC80)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x16478DC0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_INITRIGHTVIEW_OFFSET UNITYSDK_OFFSET(0x16479B80)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKCOLLECTTAB_OFFSET UNITYSDK_OFFSET(0x1647B290)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKCONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x16479930)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKJUMPPAGE_OFFSET UNITYSDK_OFFSET(0x1647ABC0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1647AC90)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1647B810)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1647B930)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1647B4D0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1647B530)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1647AD20)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1647B070)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_PLAYCOLLECTPROGRESS_OFFSET UNITYSDK_OFFSET(0x16479B10)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHASSESSSTATE_OFFSET UNITYSDK_OFFSET(0x1647A730)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHCONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x16479800)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1647A040)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHMOVIESTATE_OFFSET UNITYSDK_OFFSET(0x1647A570)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x164795B0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHREWARDPOINT_OFFSET UNITYSDK_OFFSET(0x16479740)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHRIGHT_OFFSET UNITYSDK_OFFSET(0x16479CA0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x16479D00)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1647B980)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1647B990)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1647BA20)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1647BB10)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1647BB20)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1647BB30)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1647BB40)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageController_TypeDefinitionIndex = 50732;

	class UICinemaCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_E5C5FCDBF5C3BDAC* progressHandler; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UICinemaCollectProPointWidgetController*>* proPointList; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* reviewCommentList; // 0x320
		::Class_2_E68D97581F2F1CC1* _view; // 0x328
		::MoleMole::UICinemaCollectPageContext* context; // 0x330
		::Class_2_699998D4E6F32559* model; // 0x338
		::System::Collections::Generic::List_1<::Class_1_9CF9955F8B7A43EF*>* collectList; // 0x340
		::Class_1_9CF9955F8B7A43EF* nowCollectData; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitProgressView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_INITPROGRESSVIEW_OFFSET))(this);
		}

		::System::Void GenCollectRewardList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_GENCOLLECTREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshRewardPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHREWARDPOINT_OFFSET))(this);
		}

		::System::Void RefreshConsoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHCONSOLEBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKCONSOLEBTN_OFFSET))(this);
		}

		::System::Void PlayCollectProgress(::System::Single now, ::System::Single next, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_PLAYCOLLECTPROGRESS_OFFSET))(this, now, next, duration);
		}

		::System::Void InitRightView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_INITRIGHTVIEW_OFFSET))(this);
		}

		::System::Void RefreshRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHRIGHT_OFFSET))(this);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHSTATE_OFFSET))(this);
		}

		::System::Void RefreshMovieInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET))(this);
		}

		::System::Void RefreshMovieState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHMOVIESTATE_OFFSET))(this);
		}

		::System::Void RefreshAssessState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHASSESSSTATE_OFFSET))(this);
		}

		::System::Void OnClickJumpPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKJUMPPAGE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Int32 FindFirstSelect()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_FINDFIRSTSELECT_OFFSET))(this);
		}

		::System::Void OnServerDataChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET))(this);
		}

		::System::Void OnClickCollectTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKCOLLECTTAB_OFFSET))(this, index);
		}

		::System::Void ClearCollectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_CLEARCOLLECTSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
