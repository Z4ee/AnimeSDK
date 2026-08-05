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

#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x186C6D80)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x186C6860)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186C6C60)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET UNITYSDK_OFFSET(0x186C6E80)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186C6CF0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186C6710)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186C6770)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x186C6F80)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0x186C6E00)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER_SETINITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186C6F20)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186C6FE0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186C7040)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186C70D0)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186C7160)
#define MOLEMOLE_UIGENERALOPTIONLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186C71F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionListRowWidgetController_TypeDefinitionIndex = 80004;

	class UIGeneralOptionListRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B77AE853FF5B5BBE* _view; // 0x2C0
		::MoleMole::UIGeneralOptionDropDownBoxController* ctrl; // 0x2C8
		::MoleMole::UIGeneralOptionListRowContext* _context; // 0x2D0
		::MoleMole::UIGeneralOptionDropDownBoxContext* dropDownContext; // 0x2D8

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
