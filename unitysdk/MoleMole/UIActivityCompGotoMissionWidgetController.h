#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_674DF043414AEF12;
class Class_2_61F297ED27C3382F_10;
namespace MoleMole { class UIActivityCompGotoMissionContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BC43B0)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONOPENUNLOCKCOMP_OFFSET UNITYSDK_OFFSET(0x18BC3E90)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BC4440)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BC3BB0)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BC3CF0)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC44C0)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BC4520)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BC45B0)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BC4640)
#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BC46D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompGotoMissionWidgetController_TypeDefinitionIndex = 64108;

	class UIActivityCompGotoMissionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61F297ED27C3382F_10* _view; // 0x2C0
		::MoleMole::UIActivityCompGotoMissionContext* context; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_674DF043414AEF12*>* missionList; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenUnlockComp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER_ONOPENUNLOCKCOMP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
