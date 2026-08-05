#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_26;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192F4740)
#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192F47B0)
#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192F4870)
#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192F48D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleCollectPage_InLevelWidgetController_TypeDefinitionIndex = 71990;

	class UIAutoBattleCollectPage_InLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_26* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_INLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
