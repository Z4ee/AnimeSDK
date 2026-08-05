#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0096754AC2F6E253_22;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVoidFrontLevelResultRowWidgetController_RecordData; }

#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFDE90)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFDF20)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EFDDC0)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EFDE20)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x10EFDFA0)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFE110)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFE170)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFE200)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EFE290)
#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EFE320)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelResultRowWidgetController_TypeDefinitionIndex = 56343;

	class UIVoidFrontLevelResultRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_22* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::MoleMole::UIVoidFrontLevelResultRowWidgetController_RecordData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVoidFrontLevelResultRowWidgetController_RecordData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
