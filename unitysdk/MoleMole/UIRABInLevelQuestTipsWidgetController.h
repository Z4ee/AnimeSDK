#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_39D05FA914EBB90A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A7F550)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A7F5E0)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A7F280)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A7F2E0)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7F660)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A7F6C0)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A7F750)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A7F7E0)
#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A7F870)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelQuestTipsWidgetController_TypeDefinitionIndex = 70851;

	class UIRABInLevelQuestTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_39D05FA914EBB90A* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
