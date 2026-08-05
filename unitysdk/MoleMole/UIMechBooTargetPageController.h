#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_31D08DC027B35B8F;
class Class_2_79AE422BA06F6D26_128;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMechBooTargetProRowWidgetController; }

#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17455640)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x17455B40)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x17457310)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17455650)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17457150)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174570E0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17455790)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17455A50)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17457410)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17457420)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x174574B0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174574E0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174574F0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17457500)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPageController_TypeDefinitionIndex = 85748;

	class UIMechBooTargetPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_128* _view; // 0x318
		::Class_2_31D08DC027B35B8F* _mechBooModel; // 0x320
		::System::Int32 _scriptID; // 0x328
		::System::Int32 _roundIndex; // 0x32C
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRow1; // 0x330
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRow2; // 0x338
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRow3; // 0x340
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRowBoss; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONCLICKOKBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
