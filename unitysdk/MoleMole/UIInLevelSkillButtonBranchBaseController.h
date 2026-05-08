#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISkillButtonBaseController.h"

class Class_1_6A3A26AD0CB7F995;
class Class_1_F1489324C27A1B39;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_GETSHOWCOLOR_OFFSET UNITYSDK_OFFSET(0x15D2CD50)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET UNITYSDK_OFFSET(0x15D2CDC0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET UNITYSDK_OFFSET(0x15D2CE00)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_ONHIDEBTN_OFFSET UNITYSDK_OFFSET(0x15D2D0B0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_ONSHOWBTN_OFFSET UNITYSDK_OFFSET(0x15D2D000)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D2CC20)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_SETSHOWCOLOR_OFFSET UNITYSDK_OFFSET(0x15D2CCD0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x15D2CE10)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_STARTBLOCK_OFFSET UNITYSDK_OFFSET(0x15D2CF50)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_STOPBLOCK_OFFSET UNITYSDK_OFFSET(0x15D2CFA0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_WAITUNTILNOBLOCK_OFFSET UNITYSDK_OFFSET(0x15D2CE70)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2D170)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D2D1F0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER___BASE_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x15D2D200)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonBranchBaseController_TypeDefinitionIndex = 82985;

	class UIInLevelSkillButtonBranchBaseController : public ::MoleMole::UISkillButtonBaseController
	{
	public:
		// static const ::System::String* branchBtnOn; // 0x0
		// static const ::System::String* branchBtnOff; // 0x0
		::System::Boolean _isBlocking; // 0x428
		::System::Action* _afterBlock; // 0x430
		::Class_1_F1489324C27A1B39* _container; // 0x438

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetShowColor(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_SETSHOWCOLOR_OFFSET))(this, show);
		}

		::System::Boolean GetShowColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_GETSHOWCOLOR_OFFSET))(this);
		}

		::System::String* get_ButtonSkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_GET_BUTTONSKILLNAME_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_KeyButtonCode()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_GET_KEYBUTTONCODE_OFFSET))(this);
		}

		::System::Boolean ShouldSkillButtonHandleInput(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET))(this, inputAction);
		}

		::System::Void WaitUntilNoBlock(::System::Action* afterBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_WAITUNTILNOBLOCK_OFFSET))(this, afterBlock);
		}

		::System::Void StartBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_STARTBLOCK_OFFSET))(this);
		}

		::System::Void StopBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_STOPBLOCK_OFFSET))(this);
		}

		::System::Void OnShowBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_ONSHOWBTN_OFFSET))(this);
		}

		::System::Void OnHideBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_ONHIDEBTN_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldSkillButtonHandleInput(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER___BASE_SHOULDSKILLBUTTONHANDLEINPUT_OFFSET))(this, P0);
		}
	};
}
