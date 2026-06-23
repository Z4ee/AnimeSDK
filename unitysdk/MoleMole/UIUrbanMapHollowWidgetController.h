#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITwoDMapElement_UIController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0CFE236EB43D43BD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13838D40)
#define MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13838DB0)
#define MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13838E70)
#define MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13838FF0)
#define MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13839050)
#define MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x138390F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHollowWidgetController_TypeDefinitionIndex = 87619;

	class UIUrbanMapHollowWidgetController : public ::MoleMole::UITwoDMapElement_UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_0CFE236EB43D43BD* get__viewModel()
		{
			return ((::Class_2_0CFE236EB43D43BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHOLLOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
