#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_64787C73229A04B0_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseNormalRowWidgetController_Formatter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1963DE90)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1963DF20)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1963DDC0)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1963DE20)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1963DFA0)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1963E300)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1963E360)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1963E3F0)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1963E480)
#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1963E510)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseNormalRowWidgetController_TypeDefinitionIndex = 78508;

	class UIInLevelPauseNormalRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_64787C73229A04B0_4* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _items; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIInLevelPauseNormalRowWidgetController_Formatter* formatter, ::System::Boolean recreateItems)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseNormalRowWidgetController_Formatter*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, formatter, recreateItems);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
