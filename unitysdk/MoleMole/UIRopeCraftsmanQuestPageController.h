#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_79EB9A268E300B2A;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRopeCraftsmanQuestPageController_ItemData; }
namespace MoleMole { class UIRopeCraftsmanQuestPageController_PanelData; }

#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15217F60)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_INITANDNPCREDSIGN_OFFSET UNITYSDK_OFFSET(0x15219F50)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ISCANSHOWENDDESC_OFFSET UNITYSDK_OFFSET(0x15219440)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCLICKTASK_OFFSET UNITYSDK_OFFSET(0x15218C50)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15217F70)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x15218B30)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONGOMAPBUTTON_OFFSET UNITYSDK_OFFSET(0x152196F0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONINFOBTN_OFFSET UNITYSDK_OFFSET(0x15219620)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15218550)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15218910)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152188C0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152182A0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_OPENPANEL_OFFSET UNITYSDK_OFFSET(0x15219870)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x15218390)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_SETGOTOTASKBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x152195B0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_SHOWGOTOACTIVITYBUTTON_OFFSET UNITYSDK_OFFSET(0x15218980)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1521A260)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER__ONGOMAPBUTTON_B__18_0_OFFSET UNITYSDK_OFFSET(0x1521A270)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1521A450)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1521A4E0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1521A5D0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1521A690)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1521A6A0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1521A6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeCraftsmanQuestPageController_TypeDefinitionIndex = 66886;

	class UIRopeCraftsmanQuestPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79EB9A268E300B2A* _view; // 0x310
		::MoleMole::UIRopeCraftsmanQuestPageController_PanelData* _panelData; // 0x318
		::UIWidgetGroup* _itemGroup; // 0x320
		::MoleMole::UIRopeCraftsmanQuestPageController_ItemData* _currentItemData; // 0x328
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* _gotoActivityButtonGroup; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnClickTask(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONCLICKTASK_OFFSET))(this, index);
		}

		static ::System::Boolean IsCanShowEndDesc(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ISCANSHOWENDDESC_OFFSET))(id);
		}

		::System::Void SetGotoTaskButtonEnable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_SETGOTOTASKBUTTONENABLE_OFFSET))(this, isEnable);
		}

		::System::Void OnInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONINFOBTN_OFFSET))(this);
		}

		::System::Void OnGoMapButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_ONGOMAPBUTTON_OFFSET))(this);
		}

		::System::Void ShowGotoActivityButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_SHOWGOTOACTIVITYBUTTON_OFFSET))(this);
		}

		static ::System::Void OpenPanel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_OPENPANEL_OFFSET))();
		}

		static ::System::Void InitAndNpcRedSign()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_INITANDNPCREDSIGN_OFFSET))();
		}

		::System::Void _OnGoMapButton_b__18_0(::System::Boolean isTrack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER__ONGOMAPBUTTON_B__18_0_OFFSET))(this, isTrack);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
