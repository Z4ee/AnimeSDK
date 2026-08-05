#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_2ECC1AD76C88D7C1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16AB0A60)
#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16AB0AD0)
#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16AB0B90)
#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB0BE0)
#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16AB0C40)
#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16AB0CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircle_CircleCardWidgetController_TypeDefinitionIndex = 71139;

	class UISocialCircle_CircleCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_2ECC1AD76C88D7C1* get__viewModel()
		{
			return ((::Class_2_2ECC1AD76C88D7C1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
