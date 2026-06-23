#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_31D08DC027B35B8F;
class Class_2_79AE422BA06F6D26_87;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMechBooTargetProRowWidgetController; }

#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15761FD0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x157624F0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x15763C30)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15761FE0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15763BC0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15762120)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157623E0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15763D30)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15763D40)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15763DD0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15763DE0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15763DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPopWindowController_TypeDefinitionIndex = 47545;

	class UIMechBooTargetPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_87* _view; // 0x318
		::Class_2_31D08DC027B35B8F* _mechBooModel; // 0x320
		::System::Int32 _scriptID; // 0x328
		::System::Boolean _showOkBtn; // 0x32C
		::System::Boolean _hideMaskClose; // 0x32D
		::System::Int32 _roundIndex; // 0x330
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRow1; // 0x338
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRow2; // 0x340
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRow3; // 0x348
		::MoleMole::UIMechBooTargetProRowWidgetController* _mechBooTargetProRowBoss; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
