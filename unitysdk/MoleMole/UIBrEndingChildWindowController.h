#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_75FB4A09078427E5_5;
class Class_2_A2F24078995C103E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::MiniGame { class BallRaceMiniGameWorld; }

#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1E6A7D10)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E6A8190)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONFADEOUT_OFFSET UNITYSDK_OFFSET(0x1E6A8830)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1E6A8290)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E6A8220)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E6A7D20)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E6A7D70)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1E6A7EF0)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x1E6A8750)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8920)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER__RESET_B__11_0_OFFSET UNITYSDK_OFFSET(0x1E6A8930)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E6A8B40)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1E6A8BD0)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E6A8C00)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E6A8C10)
#define MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E6A8C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBrEndingChildWindowController_TypeDefinitionIndex = 93277;

	class UIBrEndingChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_75FB4A09078427E5_5* _view; // 0x318
		::MoleMole::MiniGame::BallRaceMiniGameWorld* miniWorld; // 0x320
		::Class_2_A2F24078995C103E* gameLogic; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void OnFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER_ONFADEOUT_OFFSET))(this);
		}

		::System::Void _Reset_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER__RESET_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRENDINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
