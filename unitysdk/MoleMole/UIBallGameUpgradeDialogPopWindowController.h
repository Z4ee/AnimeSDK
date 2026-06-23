#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_C2DD7A2A29E27407;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIBallGameUpgradeDialogPopWindowController_Summary; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Arcade::BallPit { class BallGameUpgradeDialogContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1DC97B20)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x1DC98BD0)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1DC97EE0)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1DC97F70)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1DC97B30)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1DC97B80)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_PLAYUPGRADEANIMATION_OFFSET UNITYSDK_OFFSET(0x1DC98200)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SKIPANIMATION_OFFSET UNITYSDK_OFFSET(0x1DC989C0)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC98C40)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER__PLAYUPGRADEANIMATION_B__13_0_OFFSET UNITYSDK_OFFSET(0x1DC98D00)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1DC98D60)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1DC98DF0)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1DC98E00)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1DC98E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameUpgradeDialogPopWindowController_TypeDefinitionIndex = 89528;

	class UIBallGameUpgradeDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C2DD7A2A29E27407* _view; // 0x318
		::Class_3_6F28FFD006F2B451* world; // 0x320
		::System::Single AnimDelay; // 0x328
		::System::Single AnimUpgradeInterval; // 0x32C
		::System::Collections::Generic::List_1<::MoleMole::UIBallGameUpgradeDialogPopWindowController_Summary*>* summarys; // 0x330
		::MoleMole::Arcade::BallPit::BallGameUpgradeDialogContext* context; // 0x338
		::System::Boolean isEnd; // 0x340
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* delayHandle; // 0x348
		::System::Boolean onClicked; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayUpgradeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_PLAYUPGRADEANIMATION_OFFSET))(this);
		}

		::System::Void SkipAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SKIPANIMATION_OFFSET))(this);
		}

		::System::Void OnCloseClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONCLOSECLICK_OFFSET))(this);
		}

		::System::Void _PlayUpgradeAnimation_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER__PLAYUPGRADEANIMATION_B__13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
