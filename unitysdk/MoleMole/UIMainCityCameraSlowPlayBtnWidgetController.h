#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_01EB6BCB86792031;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x179E4D70)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x179E4DE0)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x179E4E80)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179E5040)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x179E50A0)
#define MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x179E5140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraSlowPlayBtnWidgetController_TypeDefinitionIndex = 43185;

	class UIMainCityCameraSlowPlayBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_01EB6BCB86792031* get__viewModel()
		{
			return ((::Class_2_01EB6BCB86792031*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERASLOWPLAYBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
