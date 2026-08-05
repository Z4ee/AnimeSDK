#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E9ABE5073CEACE88;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18561930)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185619C0)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18561860)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x185618C0)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_SETHIGHLIGHTEFFECT_OFFSET UNITYSDK_OFFSET(0x18561A40)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18561B00)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18561B60)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18561BF0)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18561C80)
#define MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18561D10)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayTimeLineWidgetController_TypeDefinitionIndex = 51287;

	class UICinemaPlayTimeLineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E9ABE5073CEACE88* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetHighlightEffect(::System::Boolean highlight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER_SETHIGHLIGHTEFFECT_OFFSET))(this, highlight);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYTIMELINEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
