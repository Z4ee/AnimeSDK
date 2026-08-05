#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_28486457C5E3F727;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A85A50)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A85AC0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15A85C90)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15A85B80)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A85D90)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A85DA0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15A85E40)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15A85ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelListRow1WidgetController_TypeDefinitionIndex = 53795;

	class UIVoidFrontLevelListRow1WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_28486457C5E3F727* get__viewModel()
		{
			return ((::Class_2_28486457C5E3F727*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTROW1WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
