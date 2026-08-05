#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISurfAutoSkillButton_1.h"

class Class_2_79AE422BA06F6D26_267;
class Class_2_B4378B46E0020E85;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1677A440)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x1677A430)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x1677A410)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x1677A3F0)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1677A450)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfResetChildWindowController_TypeDefinitionIndex = 87322;

	class UISurfResetChildWindowController : public ::MoleMole::UISurfAutoSkillButton_1<::Class_2_79AE422BA06F6D26_267*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_SkillButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
