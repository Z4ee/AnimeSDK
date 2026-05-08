#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_8A3CFA0B02434172;
namespace MoleMole { class UIAbyssSweepContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralItemBtnWidgetController; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_SWEEPBTN_OFFSET UNITYSDK_OFFSET(0x15EB60F0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15EB5770)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GOTOSHOP_OFFSET UNITYSDK_OFFSET(0x15EB6050)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_INITSWEEPBTN_OFFSET UNITYSDK_OFFSET(0x15EB5B50)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EB5F50)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EB5FE0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EB5780)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EB5A60)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15EB5D00)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB6100)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__GOTOSHOP_B__9_0_OFFSET UNITYSDK_OFFSET(0x15EB6170)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__GOTOSHOP_B__9_2_OFFSET UNITYSDK_OFFSET(0x15EB6690)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x15EB6110)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x15EB6150)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EB6730)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EB67C0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EB67D0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EB67E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssSweepPopWindowController_TypeDefinitionIndex = 78353;

	class UIAbyssSweepPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_8A3CFA0B02434172* _view; // 0x310
		::MoleMole::UIAbyssSweepContext* _context; // 0x318
		::MoleMole::UIGeneralItemBtnWidgetController* _sweepBtn; // 0x320
		::UnityEngine::Events::UnityAction* goGetAction; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitSweepBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_INITSWEEPBTN_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void GoToShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GOTOSHOP_OFFSET))(this);
		}

		::MoleMole::UIGeneralItemBtnWidgetController* get_SweepBtn()
		{
			return ((::MoleMole::UIGeneralItemBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_SWEEPBTN_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void _GoToShop_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__GOTOSHOP_B__9_0_OFFSET))(this);
		}

		::System::Void _GoToShop_b__9_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__GOTOSHOP_B__9_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
