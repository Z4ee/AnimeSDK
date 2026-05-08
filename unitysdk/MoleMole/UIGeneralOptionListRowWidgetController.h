#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B4378B46E0020E85;
class Class_2_B77AE853FF5B5BBE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralOptionDropDownBoxContext; }
namespace MoleMole { class UIGeneralOptionDropDownBoxController; }
namespace MoleMole { class UIGeneralOptionListRowContext; }

#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x157A9510)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x157A9050)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157A93F0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET UNITYSDK_OFFSET(0x157A9610)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157A9480)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157A8F00)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157A8F60)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x157A9710)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0x157A9590)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_SETINITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x157A96B0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157A9770)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157A97D0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157A9860)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157A98F0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157A9980)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionListRowWidgetController_TypeDefinitionIndex = 48383;

	class UIGeneralOptionListRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B77AE853FF5B5BBE* _view; // 0x2B8
		::MoleMole::UIGeneralOptionDropDownBoxController* ctrl; // 0x2C0
		::MoleMole::UIGeneralOptionListRowContext* _context; // 0x2C8
		::MoleMole::UIGeneralOptionDropDownBoxContext* dropDownContext; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* GetButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void OnDropDownSelect(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET))(this, selectIndex);
		}

		::System::Void SetInitSelectIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_SETINITSELECTINDEX_OFFSET))(this, index);
		}

		::System::Void RefreshContext(::MoleMole::UIGeneralOptionListRowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralOptionListRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_REFRESHCONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
