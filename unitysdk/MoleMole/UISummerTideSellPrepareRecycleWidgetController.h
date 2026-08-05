#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FEB7117E2CBA4586;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D63690)
#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D63700)
#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17D637A0)
#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D63A30)
#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D63A90)
#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17D63B30)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSellPrepareRecycleWidgetController_TypeDefinitionIndex = 78827;

	class UISummerTideSellPrepareRecycleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FEB7117E2CBA4586* get__viewModel()
		{
			return ((::Class_2_FEB7117E2CBA4586*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
