#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_77D46FFE74D81094;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_APPLYSIDE_OFFSET UNITYSDK_OFFSET(0x19ABB180)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19ABAEA0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19ABAF10)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19ABAFB0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_SETHPAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19ABB2E0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABB5B0)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19ABB610)
#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19ABB6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPWidgetController_TypeDefinitionIndex = 48908;

	class UIGalgameArgueHPWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_77D46FFE74D81094* get__viewModel()
		{
			return ((::Class_2_77D46FFE74D81094*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ApplySide(::System::Boolean isLeftSide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_APPLYSIDE_OFFSET))(this, isLeftSide);
		}

		::System::Void SetHPAvailable(::System::Boolean isAvailable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_SETHPAVAILABLE_OFFSET))(this, isAvailable);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
