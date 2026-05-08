#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_5B1CC341746CAC4C;
class Class_2_A2F24078995C103E;
class Class_2_C28925C157D4B413;
class Class_4_6B5E197F92845903;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x1C4EB710)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1C4EB280)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1C4EB870)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONGAMEEND_OFFSET UNITYSDK_OFFSET(0x1C4EBF30)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1C4EBA40)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x1C4EBFA0)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONSPEEDSYNC_OFFSET UNITYSDK_OFFSET(0x1C4EBED0)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONTIMELEFTSYNC_OFFSET UNITYSDK_OFFSET(0x1C4EC360)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1C4EB900)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1C4EB290)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1C4EB3C0)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4EBCB0)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EC540)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1C4EC550)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1C4EC5E0)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1C4EC610)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1C4EC620)
#define MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1C4EC630)

namespace MoleMole
{
	inline static constexpr unsigned int UIBrInLevelChildWindowController_TypeDefinitionIndex = 83956;

	class UIBrInLevelChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_5B1CC341746CAC4C* _view; // 0x310
		::Class_2_A2F24078995C103E* gameLogic; // 0x318
		::Class_4_6B5E197F92845903* clientWorld; // 0x320
		::Class_2_C28925C157D4B413* inputHelper; // 0x328
		::MoleMole::Arcade::BallsRace::EBrSpeedLevel curSpd; // 0x330
		::System::Single maxSpeed; // 0x334
		::System::Single curUISpd; // 0x338
		::System::Single curDampSpd; // 0x33C
		::System::Single curYRot; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void BindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_BINDVIEW_OFFSET))(this);
		}

		::System::Void OnSpeedSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONSPEEDSYNC_OFFSET))(this);
		}

		::System::Void OnGameEnd(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONGAMEEND_OFFSET))(this, _);
		}

		::System::Void OnScoreChange(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONSCORECHANGE_OFFSET))(this, arg);
		}

		::System::Void OnTimeLeftSync(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER_ONTIMELEFTSYNC_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
