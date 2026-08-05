#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_696E0C6E8A7D9C84;
class Class_2_F5737224A0253470;
class Class_2_FBB8E5C056021DB6_4;
class Class_3_C7A2D5492E2948E7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190EFA30)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190EFAC0)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190EE990)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190EEC00)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x190EEC80)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFB40)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190EFC20)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190EFCB0)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190EFD40)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190EFDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoReportWidgetController_TypeDefinitionIndex = 53708;

	class UIHollowInfoReportWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_696E0C6E8A7D9C84* _questModel; // 0x2C0
		::Class_2_F5737224A0253470* _hollowModel; // 0x2C8
		::System::Collections::Generic::List_1<::Class_3_C7A2D5492E2948E7*>* reports; // 0x2D0
		::Class_2_FBB8E5C056021DB6_4* _view; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
