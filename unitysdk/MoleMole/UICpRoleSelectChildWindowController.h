#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UICpRoleSelectChildWindowController_PageState.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_D76391934630D6CD;
class Class_2_0CCF091CD6FC39F6;
class Class_2_79F6D62CE30E3F8E_190;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpRoleSelectDifficultyScript; }
namespace MoleMole { class UICpRoleSelectPropScript; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_BACKDIFFICULTYPAGE_OFFSET UNITYSDK_OFFSET(0x1E0C3170)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_BUILDINFO_OFFSET UNITYSDK_OFFSET(0x1E0C3E70)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_CREATEROLEGRID_OFFSET UNITYSDK_OFFSET(0x1E0C3780)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GETDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1E0C4F10)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GETPAGESTATE_OFFSET UNITYSDK_OFFSET(0x1E0C3430)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GETSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1E0C4C90)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1E0C2BC0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_MOVEFOCUS_OFFSET UNITYSDK_OFFSET(0x1E0C5540)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E0C4B90)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E0C3480)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1E0C4FB0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1E0C49A0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0C4C20)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E0C2BD0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E0C4860)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHCANDY_OFFSET UNITYSDK_OFFSET(0x1E0C3FC0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHDIFFICULTYPANEL_OFFSET UNITYSDK_OFFSET(0x1E0C5BB0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1E0C3020)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHGRID_OFFSET UNITYSDK_OFFSET(0x1E0C59D0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1E0C4130)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHSELECT_OFFSET UNITYSDK_OFFSET(0x1E0C3F20)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SENDDIFFICULTYREADY_OFFSET UNITYSDK_OFFSET(0x1E0C2E00)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SETROLEVIEWPROPDATA_OFFSET UNITYSDK_OFFSET(0x1E0C4D20)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SETROLEVIEWPROPEMPTY_OFFSET UNITYSDK_OFFSET(0x1E0C4DE0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SWITCHPAGESTATE_OFFSET UNITYSDK_OFFSET(0x1E0C3310)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C6090)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C5FF0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x1E0C6120)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__ONUIINIT_B__14_1_OFFSET UNITYSDK_OFFSET(0x1E0C62B0)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E0C6470)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1E0C6500)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1E0C6530)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0C6540)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E0C6550)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E0C6560)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectChildWindowController_TypeDefinitionIndex = 90798;

	class UICpRoleSelectChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Comparison_1<::Class_1_D76391934630D6CD*>** StaticGet_CompareMethord()
		{
			return (::System::Comparison_1<::Class_1_D76391934630D6CD*>**)Il2CppClass::FromTypeDefinitionIndex(UICpRoleSelectChildWindowController_TypeDefinitionIndex)->GetStaticField(0x4E4F0);
		}
		// static const ::System::Int32 RowCount = 0x7; // 0x0
		// static const ::System::String* BtnText_UnLocked; // 0x0
		// static const ::System::String* BtnText_Locked; // 0x0
		::Class_2_79F6D62CE30E3F8E_190* _view; // 0x318
		::Class_2_0CCF091CD6FC39F6* _gameLogic; // 0x320
		::System::Collections::Generic::List_1<::Class_1_D76391934630D6CD*>* _infos; // 0x328
		::System::Int32 currentSelectId; // 0x330
		::System::Int32 currentFocusIndex; // 0x334
		::MoleMole::UICpRoleSelectChildWindowController_PageState pageState; // 0x338
		::System::Int32 currentFocusDifficulty; // 0x33C
		::Il2CppArray<::MoleMole::UICpRoleSelectDifficultyScript*>* arr; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SendDifficultyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SENDDIFFICULTYREADY_OFFSET))(this);
		}

		::System::Void BackDifficultyPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_BACKDIFFICULTYPAGE_OFFSET))(this);
		}

		::MoleMole::UICpRoleSelectChildWindowController_PageState GetPageState()
		{
			return ((::MoleMole::UICpRoleSelectChildWindowController_PageState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GETPAGESTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshCandy(::System::Int32 infoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHCANDY_OFFSET))(this, infoID);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_D76391934630D6CD* GetSelectIndex()
		{
			return ((::Class_1_D76391934630D6CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GETSELECTINDEX_OFFSET))(this);
		}

		::System::Void BuildInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_BUILDINFO_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void SetRoleViewPropEmpty(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SETROLEVIEWPROPEMPTY_OFFSET))(this, go);
		}

		::System::Void SetRoleViewPropData(::System::Int32 propId, ::System::String* icon, ::System::String* viewText, ::MoleMole::UICpRoleSelectPropScript* script)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::MoleMole::UICpRoleSelectPropScript*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SETROLEVIEWPROPDATA_OFFSET))(this, propId, icon, viewText, script);
		}

		::System::Int32 GetDifficulty(::System::Int32 leaderId, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_GETDIFFICULTY_OFFSET))(this, leaderId, limit);
		}

		::System::Void CreateRoleGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_CREATEROLEGRID_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SwitchPageState(::MoleMole::UICpRoleSelectChildWindowController_PageState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICpRoleSelectChildWindowController_PageState))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_SWITCHPAGESTATE_OFFSET))(this, state);
		}

		::System::Void RefreshDifficultyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHDIFFICULTYPANEL_OFFSET))(this);
		}

		::System::Void MoveFocus(::System::Int32 delta, ::System::Boolean horizontal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_MOVEFOCUS_OFFSET))(this, delta, horizontal);
		}

		::System::Void RefreshSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHSELECT_OFFSET))(this);
		}

		::System::Void RefreshDifficulty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHDIFFICULTY_OFFSET))(this);
		}

		::System::Void RefreshGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER_REFRESHGRID_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__ONUIINIT_B__14_0_OFFSET))(this, index);
		}

		::System::Void _OnUIInit_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER__ONUIINIT_B__14_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
