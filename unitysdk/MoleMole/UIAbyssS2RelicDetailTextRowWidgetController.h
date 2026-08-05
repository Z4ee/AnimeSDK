#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0096754AC2F6E253_23;
class Class_2_208CC9941471731A_684;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET UNITYSDK_OFFSET(0x196CD130)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196CCD30)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196CCDC0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196CCCD0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196CCE40)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196CD5D0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196CD630)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196CD6C0)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196CD750)
#define MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196CD7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicDetailTextRowWidgetController_TypeDefinitionIndex = 57550;

	class UIAbyssS2RelicDetailTextRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_23* _view; // 0x2C0
		::System::Boolean _showDetail; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::String* BuildLevelDesc(::Class_2_208CC9941471731A_684* levelConfig, ::System::Boolean light, ::System::Boolean hideLevel)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_684*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET))(this, levelConfig, light, hideLevel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILTEXTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
