#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralPopUpArrowWidgetController_ArrowPosition.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_801B37A74A1F435E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177EB7D0)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177EB840)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177EB900)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x177EB9D0)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_SETARROWPOSITION_OFFSET UNITYSDK_OFFSET(0x177EBAC0)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_SETSHOWINGSTATE_OFFSET UNITYSDK_OFFSET(0x177EBB80)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177EBC50)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177EBCB0)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177EBD50)
#define MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x177EBDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewArrowWidgetController_TypeDefinitionIndex = 52109;

	class UIGeneralNewArrowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_801B37A74A1F435E* get__viewModel()
		{
			return ((::Class_2_801B37A74A1F435E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetArrowPosition(::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_SETARROWPOSITION_OFFSET))(this, position);
		}

		::System::Void SetShowingState(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER_SETSHOWINGSTATE_OFFSET))(this, show);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWARROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
