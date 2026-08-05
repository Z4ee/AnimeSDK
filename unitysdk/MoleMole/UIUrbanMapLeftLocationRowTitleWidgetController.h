#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C7157C51E77136AC;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A68E0)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A69B0)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x162A6A70)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162A6950)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162A6C20)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A6C30)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x162A6CD0)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162A6D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftLocationRowTitleWidgetController_TypeDefinitionIndex = 83984;

	class UIUrbanMapLeftLocationRowTitleWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C7157C51E77136AC* get__viewModel()
		{
			return ((::Class_2_C7157C51E77136AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWTITLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
