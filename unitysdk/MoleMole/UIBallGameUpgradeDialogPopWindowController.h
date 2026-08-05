#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_C2DD7A2A29E27407_1;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIBallGameUpgradeDialogPopWindowController_Summary; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Arcade::BallPit { class BallGameUpgradeDialogContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1F6F9230)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x1F6FA300)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F6F95F0)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F6F9680)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1F6F9240)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1F6F9290)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_PLAYUPGRADEANIMATION_OFFSET UNITYSDK_OFFSET(0x1F6F9910)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SKIPANIMATION_OFFSET UNITYSDK_OFFSET(0x1F6FA0E0)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FA370)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER__PLAYUPGRADEANIMATION_B__13_0_OFFSET UNITYSDK_OFFSET(0x1F6FA430)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F6FA490)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F6FA520)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1F6FA530)
#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1F6FA540)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameUpgradeDialogPopWindowController_TypeDefinitionIndex = 93345;

	class UIBallGameUpgradeDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C2DD7A2A29E27407_1* _view; // 0x318
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
