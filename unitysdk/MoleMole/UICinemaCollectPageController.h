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

#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_CLEARCOLLECTSTATE_OFFSET UNITYSDK_OFFSET(0x18A723F0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_FINDFIRSTSELECT_OFFSET UNITYSDK_OFFSET(0x18A71F90)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_GENCOLLECTREWARDLIST_OFFSET UNITYSDK_OFFSET(0x18A6FD10)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18A71A30)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x18A6FA10)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_INITRIGHTVIEW_OFFSET UNITYSDK_OFFSET(0x18A70830)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKCOLLECTTAB_OFFSET UNITYSDK_OFFSET(0x18A72040)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKCONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x18A705E0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCLICKJUMPPAGE_OFFSET UNITYSDK_OFFSET(0x18A71970)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A71A40)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18A725C0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET UNITYSDK_OFFSET(0x18A726E0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A72280)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A722E0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A71AD0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A71E20)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_PLAYCOLLECTPROGRESS_OFFSET UNITYSDK_OFFSET(0x18A707C0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHASSESSSTATE_OFFSET UNITYSDK_OFFSET(0x18A71480)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHCONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x18A704B0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x18A70CF0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHMOVIESTATE_OFFSET UNITYSDK_OFFSET(0x18A71300)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x18A70260)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHREWARDPOINT_OFFSET UNITYSDK_OFFSET(0x18A703F0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHRIGHT_OFFSET UNITYSDK_OFFSET(0x18A70950)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x18A709B0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A72730)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A72740)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18A727D0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A728C0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A728D0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A728E0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A728F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageController_TypeDefinitionIndex = 49320;

	class UICinemaCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_E5C5FCDBF5C3BDAC* progressHandler; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UICinemaCollectProPointWidgetController*>* proPointList; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* reviewCommentList; // 0x328
		::Class_2_E68D97581F2F1CC1* _view; // 0x330
		::MoleMole::UICinemaCollectPageContext* context; // 0x338
		::Class_2_699998D4E6F32559* model; // 0x340
		::System::Collections::Generic::List_1<::Class_1_9CF9955F8B7A43EF*>* collectList; // 0x348
		::Class_1_9CF9955F8B7A43EF* nowCollectData; // 0x350

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
