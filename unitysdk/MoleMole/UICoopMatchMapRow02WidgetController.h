#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_B3BE3A775F46A81F_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UICoopMatchMapRow02WidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787120)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787190)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167873B0)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16787470)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16787600)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER__ONCREATEVIEWMODEL_B__4_0_OFFSET UNITYSDK_OFFSET(0x16787610)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x167879C0)
#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16787A60)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRow02WidgetController_TypeDefinitionIndex = 73028;

	class UICoopMatchMapRow02WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B3BE3A775F46A81F_2* get__viewModel()
		{
			return ((::Class_2_B3BE3A775F46A81F_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UICoopMatchMapRow02WidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopMatchMapRow02WidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void _OnCreateViewModel_b__4_0(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER__ONCREATEVIEWMODEL_B__4_0_OFFSET))(this, focus);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
