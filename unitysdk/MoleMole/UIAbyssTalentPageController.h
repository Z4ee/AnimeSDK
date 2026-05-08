#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_11;
class Class_2_208CC9941471731A_95;
class Class_2_22A9D1E24658A1BE;
class Class_2_79AE422BA06F6D26_111;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIAbyssTalentPointController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTokenWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_FINDNEXTTALENTPOINTCTRL_OFFSET UNITYSDK_OFFSET(0x17E387B0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GETDEFAULTSELECT_OFFSET UNITYSDK_OFFSET(0x17E39CF0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GETISBOUNDSIDE_OFFSET UNITYSDK_OFFSET(0x17E39890)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x17E37140)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17E37150)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_INITTALENTTREE_OFFSET UNITYSDK_OFFSET(0x17E37A50)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17E3B860)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E37160)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONICONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17E3ACC0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E380D0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONITEMCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x17E3A0B0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONTALENTACTIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x17E3B2B0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONTALENTPOINTACTIVECLICK_OFFSET UNITYSDK_OFFSET(0x17E3AE80)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONTALENTPOINTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x17E392B0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17E37F20)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E3B8B0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E371F0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E37580)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_REFRESHINFOVIEW_OFFSET UNITYSDK_OFFSET(0x17E3A110)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_REFRESHPOINTVIEW_OFFSET UNITYSDK_OFFSET(0x17E39B90)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3B920)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER__INITTALENTTREE_B__13_0_OFFSET UNITYSDK_OFFSET(0x17E3BA30)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER__ONTALENTACTIVEHANDLE_B__22_0_OFFSET UNITYSDK_OFFSET(0x17E3BB60)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E3BB80)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E3BC10)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17E3BC40)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E3BD00)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E3BD10)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E3BD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTalentPageController_TypeDefinitionIndex = 50436;

	class UIAbyssTalentPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 CheckOffect = 0x32; // 0x0
		// static const ::System::String* talentModelPath; // 0x0
		::Class_2_79AE422BA06F6D26_111* _view; // 0x310
		::System::Boolean _isStopRefreshData; // 0x318
		::Class_2_208CC9941471731A_95* currentTalentCfg; // 0x320
		::System::Collections::Generic::List_1<::Class_2_22A9D1E24658A1BE*>* talentPointCfgList; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIAbyssTalentPointController*>* talentPointDir; // 0x330
		::MoleMole::UIAbyssTalentPointController* selectPointCtrl; // 0x338
		::Class_2_E621E51D351EB960* abyssModel; // 0x340
		::MoleMole::UIGeneralTokenWidgetController* _tokenWidget; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean GetIsBoundSide(::UnityEngine::RectTransform* a, ::UnityEngine::RectTransform* b, ::System::Boolean isVertical)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GETISBOUNDSIDE_OFFSET))(this, a, b, isVertical);
		}

		::MoleMole::UIAbyssTalentPointController* FindNextTalentPointCtrl(::MoleMole::InputActionEvent inputAction)
		{
			return ((::MoleMole::UIAbyssTalentPointController*(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_FINDNEXTTALENTPOINTCTRL_OFFSET))(this, inputAction);
		}

		::System::Void InitTalentTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_INITTALENTTREE_OFFSET))(this);
		}

		::System::Int32 GetDefaultSelect()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_GETDEFAULTSELECT_OFFSET))(this);
		}

		::System::Void OnItemChangeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONITEMCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshPointView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_REFRESHPOINTVIEW_OFFSET))(this);
		}

		::System::Void OnTalentPointClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONTALENTPOINTCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshInfoView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_REFRESHINFOVIEW_OFFSET))(this);
		}

		::System::Void OnIconBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONICONBTNCLICK_OFFSET))(this);
		}

		::System::Void OnTalentPointActiveClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONTALENTPOINTACTIVECLICK_OFFSET))(this);
		}

		::System::Void OnTalentActiveHandle(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONTALENTACTIVEHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _InitTalentTree_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER__INITTALENTTREE_B__13_0_OFFSET))(this);
		}

		::System::Void _OnTalentActiveHandle_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER__ONTALENTACTIVEHANDLE_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
