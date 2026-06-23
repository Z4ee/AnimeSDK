#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_33C955BE8D3515AB;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIConsoleCameraBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }

#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_CONSOLECAMERABTN_OFFSET UNITYSDK_OFFSET(0x1730F3E0)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_CONSOLESTORYBTN_OFFSET UNITYSDK_OFFSET(0x1730F420)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_PCSTORYBTN_OFFSET UNITYSDK_OFFSET(0x1730F400)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_ROULETTEBTN_OFFSET UNITYSDK_OFFSET(0x1730F440)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1730F650)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1730F6E0)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1730F460)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1730F5E0)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_CONSOLECAMERABTN_OFFSET UNITYSDK_OFFSET(0x1730F3F0)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_CONSOLESTORYBTN_OFFSET UNITYSDK_OFFSET(0x1730F430)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_PCSTORYBTN_OFFSET UNITYSDK_OFFSET(0x1730F410)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_ROULETTEBTN_OFFSET UNITYSDK_OFFSET(0x1730F450)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1730F760)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1730F7C0)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1730F850)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1730F8E0)
#define MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1730F970)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMainCityKeyPanelWidgetController_TypeDefinitionIndex = 73736;

	class UIGeneralMainCityKeyPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_33C955BE8D3515AB* _view; // 0x2C0
		::MoleMole::UIConsoleCameraBtnWidgetController* _ConsoleCameraBtn_k__BackingField; // 0x2C8
		::MoleMole::UIGeneralConsoleBtnWidgetController* _PCStoryBtn_k__BackingField; // 0x2D0
		::MoleMole::UIGeneralConsoleBtnWidgetController* _ConsoleStoryBtn_k__BackingField; // 0x2D8
		::Class_2_B4378B46E0020E85* _RouletteBtn_k__BackingField; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIConsoleCameraBtnWidgetController* get_ConsoleCameraBtn()
		{
			return ((::MoleMole::UIConsoleCameraBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_CONSOLECAMERABTN_OFFSET))(this);
		}

		::System::Void set_ConsoleCameraBtn(::MoleMole::UIConsoleCameraBtnWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIConsoleCameraBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_CONSOLECAMERABTN_OFFSET))(this, value);
		}

		::MoleMole::UIGeneralConsoleBtnWidgetController* get_PCStoryBtn()
		{
			return ((::MoleMole::UIGeneralConsoleBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_PCSTORYBTN_OFFSET))(this);
		}

		::System::Void set_PCStoryBtn(::MoleMole::UIGeneralConsoleBtnWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralConsoleBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_PCSTORYBTN_OFFSET))(this, value);
		}

		::MoleMole::UIGeneralConsoleBtnWidgetController* get_ConsoleStoryBtn()
		{
			return ((::MoleMole::UIGeneralConsoleBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_CONSOLESTORYBTN_OFFSET))(this);
		}

		::System::Void set_ConsoleStoryBtn(::MoleMole::UIGeneralConsoleBtnWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralConsoleBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_CONSOLESTORYBTN_OFFSET))(this, value);
		}

		::Class_2_B4378B46E0020E85* get_RouletteBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_GET_ROULETTEBTN_OFFSET))(this);
		}

		::System::Void set_RouletteBtn(::Class_2_B4378B46E0020E85* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_SET_ROULETTEBTN_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMAINCITYKEYPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
