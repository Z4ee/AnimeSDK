#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISurfAutoSkillButton_1.h"

class Class_2_0C1EE8A3BE8526FC_3;
class Class_2_B4378B46E0020E85;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x10EF2BF0)
#define MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x10EF2C00)
#define MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x10EF2BE0)
#define MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x10EF2BC0)
#define MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x10EF2BA0)
#define MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF2C10)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfTurnRightChildWindowController_TypeDefinitionIndex = 51432;

	class UISurfTurnRightChildWindowController : public ::MoleMole::UISurfAutoSkillButton_1<::Class_2_0C1EE8A3BE8526FC_3*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_SkillButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}

		::System::Boolean get_EnableDragInputInSkillButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNRIGHTCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET))(this);
		}
	};
}
