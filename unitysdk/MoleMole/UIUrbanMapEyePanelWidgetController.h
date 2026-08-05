#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C287E2CAFCC7A544;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapEyePanelWidgetItemWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_CHECKUPDATE_OFFSET UNITYSDK_OFFSET(0x17D76F00)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_INITEYEWIDGETS_OFFSET UNITYSDK_OFFSET(0x17D767D0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D76B80)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D76C10)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D76760)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D76990)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONZENKOVHUNTERINFOSYNC_OFFSET UNITYSDK_OFFSET(0x17D76DF0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0x17D76E40)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_REFRESHEYE_OFFSET UNITYSDK_OFFSET(0x17D76A70)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D77100)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D771E0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D77270)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D77300)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D77390)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapEyePanelWidgetController_TypeDefinitionIndex = 89420;

	class UIUrbanMapEyePanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C287E2CAFCC7A544* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapEyePanelWidgetItemWidgetController*>* _eyeWidgetList; // 0x2C8
		::System::UInt32 _prevOpenCount; // 0x2D0
		::System::Boolean _isFirstRefresh; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitEyeWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_INITEYEWIDGETS_OFFSET))(this);
		}

		::System::Void OnZenkovHunterInfoSync(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONZENKOVHUNTERINFOSYNC_OFFSET))(this, _);
		}

		::System::Void RefreshEye()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_REFRESHEYE_OFFSET))(this);
		}

		::System::Void CheckUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_CHECKUPDATE_OFFSET))(this);
		}

		::System::Void PlayEyeAnimation(::System::UInt32 openCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_PLAYEYEANIMATION_OFFSET))(this, openCount);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
