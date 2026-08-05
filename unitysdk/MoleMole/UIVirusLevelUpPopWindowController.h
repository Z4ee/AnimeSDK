#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_5F559DEFD2F7BB3D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirusLevelUpAbilityRowWidgetController; }
namespace MoleMole { class UIVirusLevelUpDetailsRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GETABILITYITEM_OFFSET UNITYSDK_OFFSET(0x12E3E0D0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GETDETAILSITEM_OFFSET UNITYSDK_OFFSET(0x12E3DFA0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12E3D390)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONCLICKPROPERTYINFOBTN_OFFSET UNITYSDK_OFFSET(0x12E3E200)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E3D3A0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E3D560)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E3D5D0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E3E420)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E3E500)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E3E590)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12E3E5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpPopWindowController_TypeDefinitionIndex = 47319;

	class UIVirusLevelUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_5F559DEFD2F7BB3D* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIVirusLevelUpDetailsRowWidgetController*>* _detailsItems; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIVirusLevelUpAbilityRowWidgetController*>* _abilityItems; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::MoleMole::UIVirusLevelUpDetailsRowWidgetController* GetDetailsItem(::System::Int32 index)
		{
			return ((::MoleMole::UIVirusLevelUpDetailsRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GETDETAILSITEM_OFFSET))(this, index);
		}

		::MoleMole::UIVirusLevelUpAbilityRowWidgetController* GetAbilityItem(::System::Int32 index)
		{
			return ((::MoleMole::UIVirusLevelUpAbilityRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_GETABILITYITEM_OFFSET))(this, index);
		}

		::System::Void OnClickPropertyInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER_ONCLICKPROPERTYINFOBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
