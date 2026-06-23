#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_3B5926E5F38A0FB7_1;
namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowMiniGameDiscretePlayerMoveChildWindowController; }
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }
namespace MoleMole { class UIPushBoxPlayBtnAChildWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15DC3BF0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x15DC5360)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DC4D10)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15DC4E10)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15DC47A0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DC4DA0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DC3C00)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DC3DC0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_PLAYCONGRATSANIM_OFFSET UNITYSDK_OFFSET(0x15DC5650)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_TRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x15DC4E70)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC5850)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DC5860)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15DC58F0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15DC5920)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DC59E0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DC59F0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DC5A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPushBoxPlayWidgetController_TypeDefinitionIndex = 70472;

	class UIPushBoxPlayWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_3B5926E5F38A0FB7_1* _view; // 0x318
		::System::String* _lastGameState; // 0x320
		::MoleMole::UIHollowPushBoxGame3DModelController* _pushBox3DCtrl; // 0x328
		::MoleMole::UIHollowMiniGameDiscretePlayerMoveChildWindowController* _playerMoveCtrl; // 0x330
		::MoleMole::UIPushBoxPlayBtnAChildWindowController* _playBtnACtrl; // 0x338
		::MoleMole::UIAllroundGeneralTutorialPopWindowController* _popInfo; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void TriggerExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_TRIGGEREXIT_OFFSET))(this);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void PlayCongratsAnim(::System::Action* onAnimEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_PLAYCONGRATSANIM_OFFSET))(this, onAnimEnd);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
