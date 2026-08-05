#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_917;
class Class_2_3B8931CC7556B4FC;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AF8520)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AF85B0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AF7F90)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AF83A0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18AF8480)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF8630)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x18AF8690)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET UNITYSDK_OFFSET(0x18AF86B0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__ONUIINIT_B__2_3_OFFSET UNITYSDK_OFFSET(0x18AF86D0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AF8750)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AF87E0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AF8870)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AF8900)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookCampIdleWidgetController_TypeDefinitionIndex = 48291;

	class UIHandBookCampIdleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3B8931CC7556B4FC* _view; // 0x2C0
		::Class_2_208CC9941471731A_917* _entry; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__2_3(::System::Func_1<::MoleMole::UIControlReference*>* ctrl)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__ONUIINIT_B__2_3_OFFSET))(this, ctrl);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
