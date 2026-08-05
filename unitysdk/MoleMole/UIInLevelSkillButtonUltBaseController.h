#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISkillButtonBaseController.h"

namespace System { class String; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET UNITYSDK_OFFSET(0x1742D9A0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET UNITYSDK_OFFSET(0x1742D9E0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_ONHIDEULTBTN_OFFSET UNITYSDK_OFFSET(0x1742DB00)
#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_ONSHOWULTBTN_OFFSET UNITYSDK_OFFSET(0x1742DA50)
#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1742D9F0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1742DBC0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER___BASE_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1742DC40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonUltBaseController_TypeDefinitionIndex = 60377;

	class UIInLevelSkillButtonUltBaseController : public ::MoleMole::UISkillButtonBaseController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* get_ButtonSkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_KeyButtonCode()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET))(this);
		}

		::System::Boolean ShouldSkillButtonHandleInput(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET))(this, inputAction);
		}

		::System::Void OnShowUltBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_ONSHOWULTBTN_OFFSET))(this);
		}

		::System::Void OnHideUltBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER_ONHIDEULTBTN_OFFSET))(this);
		}

		::System::Boolean __base_ShouldSkillButtonHandleInput(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONULTBASECONTROLLER___BASE_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET))(this, P0);
		}
	};
}
